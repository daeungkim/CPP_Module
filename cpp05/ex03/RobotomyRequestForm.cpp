/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 02:07:33 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 03:22:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("Robotomy Request", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref)
    : Form(ref)
{    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
    Form::operator=(ref);    
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    Form::execute(executor);    
    
    std::cout << "Drillllllllllllllllllllll!!" << std::endl;

    if (rand() % 2 == 1)
        std::cout << this->getTarget() << " robotomized success!!" << std::endl;
    else
        std::cout << this->getTarget() << " robotomized fail!!" << std::endl; 
    
}