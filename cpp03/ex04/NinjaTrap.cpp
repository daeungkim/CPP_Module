/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:26:24 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:47:45 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "NinjaTrap(" << name << ")" << " created!" << std::endl;
    this->hit_points_ = 60;
    this->max_hit_points_ = 60;
    this->energy_points_ = 120;
    this->max_energy_points_ = 120;
    this->melee_attack_damage_ = 60;
    this->ranged_attack_damage_ = 5;
    this->armor_damage_reduction_ = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap& ref) : ClapTrap(ref.name_)
{
    std::cout << "NinjaTrap copied!" << std::endl;
    *this = ref;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap died!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap& target)
{
    std::cout << "use nijaShoebox to ClapTrap(" << target.getName() << ")" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& target)
{
    std::cout << "use nijaShoebox to FragTrap(" << target.getName() << ")" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& target)
{
    std::cout << "use nijaShoebox to ScavTrap(" << target.getName() << ")" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
    std::cout << "use nijaShoebox to NinjaTrap(" << target.getName() << ")" << std::endl;
}