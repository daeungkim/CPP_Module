/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:13:22 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/01 22:32:29 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>

struct Data
{
	std::string 	s1;
	int				n;
	std::string 	s2;
};


void *serialize(void)
{
	std::string alnum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	std::random_device rd;

	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> dis(0, alnum.length() - 1);

	char *ptr = new char[20];

	for (int i = 0; i < 8; i++)
		ptr[i] = alnum[dis(gen)];

	// 8번쨰 부터 4바이트를 int형을 참조하는 포인터 변수로 변환
	// 그곳을 역참조해서 안에 랜덤한 정수를 넣어줌.
	*reinterpret_cast<int *>(ptr + 8) = (dis(gen) % 10);

	for (int i = 0; i < 8; i++)
		ptr[i + 12] = alnum[dis(gen)];

	// for (int i = 0; i < 12; i++)
	// 	std::cout << *(ptr + i);
	return (ptr);
}

Data *deserialize(void *ptr)
{
	Data *data = new Data;

	data->s1 = std::string(static_cast<char*>(ptr), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(ptr) + 8);
	data->s2 = std::string(static_cast<char*>(ptr) + 12, 8);
	return (data);
}

int main(void)
{
	char *ptr = reinterpret_cast<char*>(serialize());

	std::cout << "\n======================================" << std::endl;

	for (int i = 0; i < 8; i++)
		std::cout << *(ptr + i);

	std::cout << "\033[1;31m" << *reinterpret_cast<int*>(ptr + 8) << "\33[0m";

	for (int i = 12; i < 20; i++)
		std::cout << *(ptr + i);

	std::cout << "\n------------------------------------" << std::endl;

	Data *data = deserialize(ptr);

	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "n = " << data->n << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;

	std::cout << "======================================\n" << std::endl;

	delete ptr;
	delete data;
}
