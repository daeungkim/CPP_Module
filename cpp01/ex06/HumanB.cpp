/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:23:56 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 15:32:59 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    weapon_ = 0;
}

void HumanB::setWeapon(Weapon &weapon)
{
    weapon_ = &weapon;
}

void HumanB::attack()
{
    std::cout << "\033[0;31m" << name << " attacks with his " << weapon_->getType() << "\033[0m" << std::endl;
}