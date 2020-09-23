/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:22:00 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:35:51 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap(" << name << ")" << " created!" << std::endl;
    this->melee_attack_damage_ = 30;
    this->ranged_attack_damage_ = 20;
    this->armor_damage_reduction_ = 5;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref.name_)
{
    std::cout << "ScavTrap copied!" << std::endl;
    *this = ref;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap died!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::string name[5] = {"Fred", "John", "Lisa", "Josh", "Bark"};
    
    std::cout << this->name_ << " challenge to new comer "
              << name[rand() % 5] << "!!" << std::endl;
}