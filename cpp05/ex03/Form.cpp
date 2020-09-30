/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 03:12:49 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 03:30:46 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : name_("noName"), is_sign_(false), sign_grade_(1), execute_grade_(1), target_("noTarget")
{
}

Form::Form(std::string name, int sign_grade, int execute_grade, std::string target)
    : name_(name), is_sign_(false), sign_grade_(sign_grade), execute_grade_(execute_grade), target_(target)
{
    if (this->sign_grade_ < 1 || this->execute_grade_ < 1)          
        throw Form::GradeTooHighException();
    else if (this->sign_grade_ > 150 || this->execute_grade_ > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &ref)
    : name_(ref.getName()), sign_grade_(ref.getSignGrade()),
      execute_grade_(ref.getExecuteGrade()), target_(ref.getTarget())
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

std::string Form::getTarget() const
{
    return (this->target_);
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

void Form::execute(Bureaucrat const &executor) const
{
    // 자식들이 먼저 Form::execute를 호출해 주기 때문에 여기서 예와처리를 하면 됨.
    if (this->getIsSign() == false)
        throw Form::NoSignExecption();
    else if (this->execute_grade_ < executor.getGrade())
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

const char *Form::NoSignExecption::what() const throw()
{
    return"\033[2;31mFormException: Form must be signed before execute\033[0m";
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
    out << "-----------status-----------\n"
        << "name : " << form.getName() << "\n"
        << "is sign : " << form.getIsSign() << "\n"
        << "sign grade : " << form.getSignGrade() << "\n"
        << "execute grade : " << form.getExecuteGrade() << "\n"
        << "target : " << form.getTarget() << "\n"
        << "----------------------------" << std::endl;
    
    return (out);
}