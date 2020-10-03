/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:42:08 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/03 16:11:45 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
    std::cout << "=========vector==========" << std::endl;

    std::vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(i + 1);
    
    std::cout << "vector = ";
    for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
        std::cout << *i << " ";

    std::cout << std::endl;
    
    std::cout << "------- easyfind -------" << std::endl;

    std::cout << "easyfind(vec, 4) = " << *easyfind(vec, 4) << std::endl;

    try
    {
        std::cout << "easyfind(vec, 100) = ";
        std::cout << *easyfind(vec, 100) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "=========list==========" << std::endl; 
    std::list<int> list;
    for (int i = 0; i < 10; i++)
        list.push_back(i + 1);

    std::cout << "list = ";
    for (std::list<int>::iterator i = list.begin(); i != list.end(); i++)
        std::cout << *i << " ";
    
    std::cout << std::endl;
    
    std::cout << "------- easyfind -------" << std::endl;

    std::cout << "easyfind(list, 2) = " << *easyfind(list, 2) << std::endl;

    try
    {
        std::cout << "easyfind(list, 50) = ";
        std::cout << *easyfind(list, 50) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
        
}