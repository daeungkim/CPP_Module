/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 01:42:41 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 03:22:45 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// 기본 생성자는 구현 안함.
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("Shrubbery Creation", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref)
    : Form(ref)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
    Form::operator=(ref);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    
    std::ofstream file(this->getTarget() + "_shrubbery");
   
    file << "    _\\/_     " << std::endl; 
    file << "     /\\      " << std::endl;     
    file << "     /\\      " << std::endl;      
    file << "    /  \\     " << std::endl;    
    file << "    /~~\\o    " << std::endl;    
    file << "   /o   \\    " << std::endl;     
    file << "  /~~*~~~\\   " << std::endl;     
    file << " o/    o \\   " << std::endl;     
    file << " /~~~~~~~~\\~`" << std::endl;     
    file << "/__*_______\\ " << std::endl;      
    file << "     ||      " << std::endl; 
    file << "   \\====/    " << std::endl; 
    file << "    \\__/     " << std::endl;

    std::cout << "file created!" << std::endl;
}



