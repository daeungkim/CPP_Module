/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 04:22:38 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/29 05:00:17 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "==========constructer test==========" << std::endl;

    Form *form = nullptr;

    try
    {
        form = new Form("Soccer", 0, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete form;
    
    try
    {
        form = new Form("Soccer", 160, 10); 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    delete form;
    
    std::cout << "==========sign test==========" << std::endl; 

    form = new Form("Soccer", 20, 10);
    
    Bureaucrat *bur = new Bureaucrat("Steven", 10);

    try
    {
        bur->signForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << *form;

    delete form;

    form = new Form("Soccer", 4, 20);

    try
    {
        bur->signForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << *form;

    delete form;
    delete bur;
}