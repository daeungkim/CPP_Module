/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:02:35 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/26 17:31:47 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& ref)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = ref;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& ref)
{
    (void)ref;
    return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
    return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}