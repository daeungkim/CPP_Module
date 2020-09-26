/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:30:06 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 02:34:04 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice")
{
}

Ice::Ice(const Ice& ref)
    : AMateria(ref)
{
}

Ice& Ice::operator=(const Ice& ref)
{
    this->AMateria::operator=(ref);
    return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "\033[0;34m"
              << "* shoots an ice bolt at " << target.getName() << " *" 
              << "\033[0m" << std::endl;
    AMateria::use(target);
}
