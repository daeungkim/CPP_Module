/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:33:43 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 14:46:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : hit_points_(100), max_hit_points_(100), energy_points_(100), max_energy_points_(100),
    level_(1), name_(name), melee_attack_damage_(0), ranged_attack_damage_(0), armor_damage_reduction_(0)
{
    std::cout << "ClapTrap(" << name << ") created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
    std::cout << "ClapTrap copyed!" << std::endl;
    *this = ref;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destoryed!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->name_);
}

// 원거리 공격
void ClapTrap::rangedAttack(std::string const& target)
{
    std::cout << "\033[1;33m" << this->name_ << " attacks " << target
              << " at range, " << target << " damaged "
              << this->ranged_attack_damage_ << " points!\033[0m" << std::endl;
}

// 근접 공격
void ClapTrap::meleeAttack(std::string const& target)
{
    std::cout << "\033[1;33m" << this->name_ << " attacks " << target
              << " at melee, " << target << " damaged "
              << this->melee_attack_damage_ << " points!\033[0m" << std::endl;
}

// 공격 당함
void ClapTrap::takeDamage(unsigned int amount)
{
    int damage = amount - this->armor_damage_reduction_;

    if (damage < 0)
        damage = 0;
        
    this->hit_points_ -= damage;
    
    if (this->hit_points_ < 0)
        this->hit_points_ = 0;
    
    std::cout << "\033[0;31m" 
              << this->name_ << " take damage "
              << damage << " points!" 
              << "\033[0m" << std::endl;
}

// 수리
void ClapTrap::beRepaired(unsigned int amount)
{
    this->hit_points_ += amount;
    this->energy_points_ += amount;
    
    if (this->hit_points_ > this->max_hit_points_)
        this->hit_points_ = this->max_hit_points_;
    if (this->energy_points_ > this->max_energy_points_)
        this->energy_points_ = this->max_energy_points_;
    
    std::cout << "\033[0;34m" 
              << this->name_ << " repaired "
              << amount << " points!" 
              << "\033[0m" << std::endl;    
}

void ClapTrap::showstats()
{
    std::cout << "-------------------" << std::endl;
    std::cout << "name = " << name_ << std::endl;
    std::cout << "hp = " << hit_points_ << std::endl;
    std::cout << "energy = " << energy_points_ << std::endl;
    std::cout << "-------------------" << std::endl;
}