/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:34:27 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/30 13:59:36 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &ref);
        Intern& operator=(const Intern &ref);
        ~Intern();

        class NoNameMatchExectpion : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        Form*   CreatePresidentialPardonForm(std::string &target);
        Form*   CreateRobotomyRequestForm(std::string &target);
        Form*   CreateShrubberyCreationForm(std::string &target);

        Form*   makeForm(std::string name , std::string target);
};

#endif