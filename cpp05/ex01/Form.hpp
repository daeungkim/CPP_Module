/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 03:12:47 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/29 04:22:13 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name_;
        bool                is_sign_;
        const int           sign_grade_;
        const int           execute_grade_;

        Form();
    
    public:
        Form(std::string name, int sign_grade, int execute_grade);
        Form(const Form &ref);
        Form& operator=(const Form &ref);
        ~Form();

        std::string         getName() const;
        bool                getIsSign() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;
        
        void beSigned(Bureaucrat &bur);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
               virtual const char *what() const throw(); 
        };
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif