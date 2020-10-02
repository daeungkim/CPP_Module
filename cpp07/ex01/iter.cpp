/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 11:02:48 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/02 11:13:53 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T &p))
{
    for (int i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void f(T &p)
{
    std::cout << p << std::endl;
}

int main(void)
{
    int iarr[3] = {1, 2, 3};
    iter(iarr, 3, f);
    
    std::cout << std::endl;

    char carr[3] = {'a', 'b', 'c'};
    iter(carr, 3, f);

    std::cout << std::endl; 
    
    float farr[3] = {1.1f, 2.2f, 3.3f};
    iter(farr, 3, f);

    std::cout << std::endl; 
    
    double darr[3] = {1.11, 2.22, 3.33};
    iter(darr, 3, f); 
    
    std::cout << std::endl; 
    
    std::string sarr[3] = {"abc", "def", "ghj"};
    iter(sarr, 3, f);
}