/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:22:05 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/16 14:37:03 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PHONEBOOK phonebook;
    std::string input;
    while (1)
    {
        std::cout << std::endl;
        phonebook.showMenu();
        getline(std::cin, input, '\n');
        std::cout << std::endl;
        
        // add
        if (input.compare("add") == 0)
            phonebook.addNewInfo();
        // search
        else if (input.compare("search") == 0)
            phonebook.showAllInfos();
        //exit
        else if (input.compare("exit") == 0)
        {
            std::cout << "exit" << std::endl;
            break;
        }
        else
            std::cout << "long input" << std::endl;
    }

}
