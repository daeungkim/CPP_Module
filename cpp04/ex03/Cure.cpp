/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:36:18 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 02:35:00 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{
}

Cure::Cure(const Cure& ref)
    : AMateria(ref)
{
}

Cure& Cure::operator=(const Cure& ref)
{
    this->AMateria::operator=(ref);
    return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "\033[0;32m"
              << "* heals " << target.getName() << "'s wounds *" 
              << "\033[0m" << std::endl;
    AMateria::use(target);
}