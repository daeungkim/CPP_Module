/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 11:51:55 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/02 15:29:24 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    std::cout << "========int========" << std::endl;

    Array<int> int_arr(5);
    for (int i = 0; i < 5; i++)
        int_arr[i] = i + 1;
    
    for (int i = 0; i < 5; i++)
        std::cout << (int_arr[i]) << " ";

    std::cout << std::endl;

    std::cout << "--- index exception ---" << std::endl;

    try
    {
        std::cout << (int_arr[100]) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "--- copy constructor ---" << std::endl;

    Array<int> copy(int_arr);

    copy[1] = 100;

    std::cout << "int_arr = ";
    for (int i = 0; i < 5; i++)
        std::cout << int_arr[i] << " ";
    std::cout << std::endl;

    std::cout << "copy = ";
    for (int i = 0; i < 5; i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl; 
    
    std::cout << "------- default constructor try-catch -----" << std::endl;
	Array<int> test4;
	try
	{
		test4[0];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    
    std::cout << "========char========" << std::endl;

    Array<char> char_arr(5);
    for (int i = 0; i < 5; i++)
        char_arr[i] = 'a' + i;

    for (int i = 0; i < 5; i++)
        std::cout << (char_arr[i]) << " ";

    std::cout << std::endl;

    std::cout << "========float========" << std::endl;

    Array<float> float_arr(5);
    for (int i = 0; i < 5; i++)
        float_arr[i] = 1.1f * i;

    for (int i = 0; i < 5; i++)
        std::cout << (float_arr[i]) << " ";

    std::cout << std::endl; 

    std::cout << "========double========" << std::endl; 

    Array<double> double_arr(5);
    for (int i = 0; i < 5; i++)
        double_arr[i] = 1.1 * i;

    for (int i = 0; i < 5; i++)
        std::cout << (double_arr[i]) << " ";

    std::cout << std::endl; 
    
    std::cout << "========string========" << std::endl; 

    Array<std::string> string_arr(5);
    for (int i = 0; i < 5; i++)
        string_arr[i] = "aa";

    for (int i = 0; i < 5; i++)
        std::cout << (string_arr[i]) << " ";

    std::cout << std::endl; 
    
}