/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:52:27 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 14:09:33 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern intern;

    Form *form = intern.makeForm("presidential pardon", "steven");

    std::cout << *form;

    delete form;
    
    try
    {
        form = intern.makeForm("no match name", "stevevn");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}