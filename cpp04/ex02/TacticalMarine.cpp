/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 21:39:12 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/26 15:26:59 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& ref)
{   
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = ref;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine& ref)
{
    (void)ref;
    return (*this);
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
    return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}