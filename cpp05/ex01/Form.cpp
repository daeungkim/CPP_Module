/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 03:12:49 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/29 04:59:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : name_("noName"), is_sign_(false), sign_grade_(1), execute_grade_(1)
{
}

Form::Form(std::string name, int sign_grade, int execute_grade)
    : name_(name), is_sign_(false), sign_grade_(sign_grade), execute_grade_(execute_grade)
{
    if (this->sign_grade_ < 1)          
        throw Form::GradeTooHighException();
    else if (this->sign_grade_ > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &ref)
    : name_(ref.getName()), sign_grade_(ref.getSignGrade()), execute_grade_(ref.getExecuteGrade())
{
    this->is_sign_ = false;    
}

Form& Form::operator=(const Form &ref)
{
    this->is_sign_ = ref.getIsSign();
    return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return (this->name_);
}

bool Form::getIsSign() const
{
    return (this->is_sign_);
}

int Form::getSignGrade() const
{
    return (this->sign_grade_);
}

int Form::getExecuteGrade() const
{
    return (this->execute_grade_);
}

void Form::beSigned(Bureaucrat &bur)
{
    // takes a Bureaucrat, and makes the form signed 
    // if the bureaucrat’s grade is high enough.
    if (bur.getGrade() < this->sign_grade_)
        this->is_sign_ = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "\033[1;31mFormException: Grade too high\033[0m";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "\033[0;31mFormException: Grade too low\033[0m";
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
    out << "-----------status-----------\n"
        << "name : " << form.getName() << "\n"
        << "is sign : " << form.getIsSign() << "\n"
        << "sign grade : " << form.getSignGrade() << "\n"
        << "execute grade : " << form.getExecuteGrade() << "\n"
        << "----------------------------" << std::endl;
    
    return (out);
}