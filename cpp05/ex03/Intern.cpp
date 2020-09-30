/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:34:30 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 14:04:22 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &ref)
{
    *this = ref;
}

Intern& Intern::operator=(const Intern &ref)
{
    (void) ref;
    return (*this);
}

Intern::~Intern()
{
}

const char* Intern::NoNameMatchExectpion::what() const throw()
{
    return "\033[0;31mInternException: No name matched form\033[0m";
}

Form* Intern::CreatePresidentialPardonForm(std::string &target)
{
    return (new PresidentialPardonForm(target));
}

Form* Intern::CreateRobotomyRequestForm(std::string &target)
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::CreateShrubberyCreationForm(std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(std::string name, std::string target)
{
    std::string names[3] = 
    {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };

    Form*   (Intern:: *forms[3])(std::string &target) = {
        &Intern::CreatePresidentialPardonForm,
        &Intern::CreateRobotomyRequestForm,
        &Intern::CreateShrubberyCreationForm
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (name == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            return ((this->*(forms[i]))(target));
        }
    }
    throw Intern::NoNameMatchExectpion();
    return (nullptr);
}