/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 03:12:47 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 03:32:37 by seunkim          ###   ########.fr       */
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
        std::string         target_;            // 추가

        Form();
    
    public:
        Form(std::string name, int sign_grade, int execute_grade, std::string target);
        Form(const Form &ref);
        Form& operator=(const Form &ref);
        virtual ~Form();        // 상속으로 인해 virtual 추가

        std::string         getName() const;
        bool                getIsSign() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;
        std::string         getTarget() const;   // 추가
        
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
        // 싸인 안했을 때 예외처리 클래스
        class NoSignExecption : public std::exception
        {
            public:
               virtual const char *what() const throw(); 
        };
        
        virtual void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif