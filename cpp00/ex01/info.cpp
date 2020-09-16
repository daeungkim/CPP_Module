/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:21:50 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/16 15:01:26 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.hpp"

void INFO::inputNewInfo(void)
{
    std::cout << "========== input new info ==========" << std::endl;
    
    std::cout << "first name: ";
    std::getline(std::cin, categorys[0], '\n');

    std::cout << "last name: ";
    std::getline(std::cin, categorys[1], '\n');

    std::cout << "nickame: ";
    std::getline(std::cin, categorys[2], '\n');

    std::cout << "login: ";
    std::getline(std::cin, categorys[3], '\n');

    std::cout << "postal address: ";
    std::getline(std::cin, categorys[4], '\n');

    std::cout << "email address: ";
    std::getline(std::cin, categorys[5], '\n');

    std::cout << "phone number: ";
    std::getline(std::cin, categorys[6], '\n');

    std::cout << "birthday date: ";
    std::getline(std::cin, categorys[7], '\n');

    std::cout << "favorite meal: ";
    std::getline(std::cin, categorys[8], '\n');

    std::cout << "underwear color: ";
    std::getline(std::cin, categorys[9], '\n');

    std::cout << "darkest secret: ";
    std::getline(std::cin, categorys[10], '\n'); 
}

void INFO::showInfo(void)
{
    std::cout << std::endl;
    std::cout << "=========================================" << std::endl;
    std::string names[11] = {"first name", "last name", "nickname",
                                 "login", "postal address", "email address",
                                 "phone number", "birthday date", "favorite meal",
                                 "underwear color", "darkest secret"};
    for (int i = 0; i < 11; i++)
    {
        std::cout << names[i] << ":" << categorys[i] << std::endl;
    }
    std::cout << "=========================================" << std::endl;
}

std::string INFO::getCategory(int index)
{
    return categorys[index];
}
