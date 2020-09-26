/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 21:21:04 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 01:56:56 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
    : type_(type), xp_(0)
{
}

AMateria::AMateria(const AMateria& ref)
    : type_(ref.getType()), xp_(ref.getXp())
{
}

AMateria& AMateria::operator=(const AMateria& ref)
{
    this->type_ = ref.getType();
    this->xp_ = ref.getXp();
    return (*this);
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
    return (this->type_);
}

unsigned int AMateria::getXp() const
{
    return (this->xp_);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->xp_ += 10;
}