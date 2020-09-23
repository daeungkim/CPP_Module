/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:49:53 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 17:38:07 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) 
: NinjaTrap(name), FragTrap(name), ClapTrap(name)
{
    this->hit_points_ = FragTrap::hit_points_;
    this->max_hit_points_ = FragTrap::max_energy_points_;
    this->energy_points_ = NinjaTrap::energy_points_;
    this->max_energy_points_ = NinjaTrap::max_energy_points_;
    this->melee_attack_damage_ = NinjaTrap::melee_attack_damage_;
    this->ranged_attack_damage_ = FragTrap::ranged_attack_damage_;
    this->armor_damage_reduction_ = FragTrap::armor_damage_reduction_;

    std::cout << "SuperTrap(" << name << ") created!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& ref)
: NinjaTrap(ref.getName()), FragTrap(ref.getName()), ClapTrap(ref.getName())
{
    std::cout << "Super Trap copied!" << std::endl;
    *this = ref;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap died!" << std::endl;
}

void SuperTrap::rangedAttack(std::string const& target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target)
{
    NinjaTrap::meleeAttack(target);
}