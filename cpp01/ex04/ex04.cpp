/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 01:44:04 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 01:57:22 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "\033[0;31mHI THIS IS BRAIN\033[0m";

    std::string *ptr;

    ptr = &str;

    std::string &ref = str;

    std::cout << "print by pointer" << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << "print by reference" << std::endl;
    std::cout << ref << std::endl; 
}