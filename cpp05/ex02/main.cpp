/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 02:39:01 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 03:49:00 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    // 관료 생성
    Bureaucrat bur("steven", 15);
    
    Form *form = new ShrubberyCreationForm("home");

    // 싸인을 안했기 때문에 예외 발생
    bur.executeForm(*form);

    std::cout << *form;

    bur.signForm(*form);

    std::cout << *form; 

    // 이번에는 싸인을 해서 잘 됨. (나무 그림 파일 생성)
    bur.executeForm(*form);

    delete form;

    std::cout << "\n\n=========================================================" << std::endl;

    form = new RobotomyRequestForm("home");

    bur.signForm(*form);

    std::cout << *form;

    // 관료가 grade가 높아서 실행 성공.
    bur.executeForm(*form);

    delete form;
    
    std::cout << "\n\n=========================================================" << std::endl;

    form = new PresidentialPardonForm("home");

    bur.signForm(*form);

    std::cout << *form;

    // grade가 낮아서 예와 bur 15  presi.. 5
    bur.executeForm(*form);

    Bureaucrat bur2("song", 2);
    // grade가 높아서 실행 함.
    bur2.executeForm(*form);

    delete form;
}