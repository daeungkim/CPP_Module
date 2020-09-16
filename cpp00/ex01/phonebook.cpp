/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:22:10 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/16 15:10:33 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PHONEBOOK::PHONEBOOK(void)
{
    last_index = 0;
    std::cout << "phonebook created!" << std::endl;
}

void PHONEBOOK::showMenu(void)
{
    std::cout << "what you want to do?(input ADD, SEARCH, EXIT) : ";
}

void PHONEBOOK::addNewInfo(void)
{
    if (last_index > 7)
    {
        std::cout << "full datas maxinum is 8!!" << std::endl;
        return ;
    }
    INFO info;
    
    info.inputNewInfo();
    
    infos[last_index] = info;

    last_index++;
}

void PHONEBOOK::showAllInfos(void)
{
    // 연락처가 없을 때 처리
    if (last_index == 0)
    {
        std::cout << "No datas!" << std::endl;
        return ;
    }
    
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;

    for (int i = 0; i < last_index; i++)
    {        
        // index
        std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1 << "|";

        // firstname
        if (infos[i].getCategory(0).length() > 10)
            std::cout << infos[i].getCategory(0).substr(0,9) << "." << "|";
        else
            std::cout << std::setfill(' ') << std::setw(10) << infos[i].getCategory(0)<< "|";

        // lastname
        if (infos[i].getCategory(1).length() > 10)
            std::cout << infos[i].getCategory(1).substr(0,9) << "." << "|";
        else
            std::cout << std::setfill(' ') << std::setw(10) << infos[i].getCategory(1)<< "|";
        
        // nickname
        if (infos[i].getCategory(2).length() > 10)
            std::cout << infos[i].getCategory(2).substr(0,9) << "." << "|";
        else
            std::cout << std::setfill(' ') << std::setw(10) << infos[i].getCategory(2)<< "|";

        std::cout << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    
    char input_idx;
    
    while (1)
    {
        std::cout << "which index do you want to see more detail(input index) : ";

        std::cin >> input_idx;
        
        if (input_idx > '0' && input_idx < (last_index + '0') + 1)
        {
            infos[(input_idx - '0') - 1].showInfo();
            break;
        }
        else
            std::cout << "input 0 to " << last_index << "!!!" << std::endl;
    }
    // 표준 입력을 비워줌 마지막 앤터 때문에 메뉴에서 입력으르 받을 때 엔터를 한번 입력 받음
    std::cin.clear();
    std::cin.ignore(1, '\n');       // 앤터 무시
}
