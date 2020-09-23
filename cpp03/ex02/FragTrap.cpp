/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:51:10 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 13:09:30 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap(" << name << ")" << " created!" << std::endl;
    this->melee_attack_damage_ = 30;
    this->ranged_attack_damage_ = 20;
    this->armor_damage_reduction_ = 5;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref.name_)
{
    std::cout << "FrapTrap copied!" << std::endl;
    *this = ref;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap died!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (this->energy_points_ < 25)
    {
        std::cout << "no energy!" << std::endl;
        return ;
    }

    this->energy_points_ -= 25;

    std::string skills[5] = {"punch", "leg kick", "gun attack", "laser attack", "back attack"};
    int damage[5] = {10, 13, 7, 12, 15};
    
    std::cout << "\033[0;33m" 
              << this->name_ << " use "
              << skills[rand() % 5] << " "
              << damage[rand() % 5] << " points! "
              << "to " << target << "!"
              << "\033[0m" << std::endl;
}
