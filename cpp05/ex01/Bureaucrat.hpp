/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:42:23 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/29 04:21:57 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name_;
        int                 grade_;
        Bureaucrat();       // 코펠린 폼에서 기본 생성자는 외부에서 호출 할 수 없게 private에 선언

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& ref);
        Bureaucrat& operator= (const Bureaucrat& ref);
        ~Bureaucrat();
        
        std::string const&  getName() const;
        int                 getGrade() const;

        void                increaseGrade();
        void                decreaseGrade();

        // 예외 중첩 클래스 만들기
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

        void signForm(Form &form);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &bur);

#endif