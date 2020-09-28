/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:42:21 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/29 04:21:23 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : name_(name), grade_(grade)
{   
    if (this->grade_ < 1)       // 1등이 가장 높음.
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade_ > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
    : name_(ref.getName())
{
    this->grade_ = ref.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
    // this->name_ = ref.getName();
    this->grade_ = ref.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string const& Bureaucrat::getName() const
{
    return (this->name_);
}

int Bureaucrat::getGrade() const
{
    return (this->grade_);
}

void Bureaucrat::increaseGrade()
{
    if (this->grade_ == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade_ -= 1;
}

void Bureaucrat::decreaseGrade()
{
    if (this->grade_ == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade_ += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "\033[1;31mBureaucratException: Grade too high\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "\033[0;31mBureaucratException: Grade too low\033[0m";
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name_ << " signs " << form.getName() << "." << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cout << this->name_ << " cannot sign " << form.getName() << " because "; 
        std::cerr << e.what() << '\n';
    }
    
} 

std::ostream& operator<<(std::ostream &out, Bureaucrat &bur)
{
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return (out);
}
