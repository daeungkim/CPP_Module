/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:42:26 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/29 02:55:42 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "==========constructer test==========" << std::endl;

    Bureaucrat* bur = nullptr;
    try
    {
        bur = new Bureaucrat("steven", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete bur;
    
    bur = nullptr;
    try
    {
        bur = new Bureaucrat("steven", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "==========inc, dec test==========" << std::endl; 
    
    delete bur;
    
    bur = new Bureaucrat("steven", 149);
    std::cout << *bur;
    try
    {
        bur->decreaseGrade();
        std::cout << *bur;
        bur->decreaseGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete bur;
    
    bur = new Bureaucrat("steven", 2);
    std::cout << *bur;
    try
    {
        bur->increaseGrade();
        std::cout << *bur;
        bur->increaseGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete bur;
}