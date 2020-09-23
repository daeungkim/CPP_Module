/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:12:47 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/23 10:59:10 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// c++ 생성자 초기화 문법 
Fragtrap::Fragtrap(std::string name)
    : hit_points_(100), max_hit_points_(100), energy_points_(100), max_energy_points_(100),
    level_(1), name_(name), melee_attack_damage_(30), ranged_attack_damage_(20), armor_damage_reduction_(5)
{
    std::cout << "constructor call with name(" << name << ") level = " << this->level_ <<std::endl;
}

// 복사 생성자
Fragtrap::Fragtrap(const Fragtrap& ref)
{
    // this는 인스턴스의 포인터!
    *this = ref;
}

// 소멸자
Fragtrap::~Fragtrap()
{
    std::cout << this->name_ << " died" << std::endl;
}

// 원거리 공격
void Fragtrap::rangedAttack(std::string const& target)
{
    std::cout << "\033[1;33m" << this->name_ << " attacks " << target
              << " at range, " << target << " damaged "
              << this->ranged_attack_damage_ << " points!\033[0m" << std::endl;
}

// 근접 공격
void Fragtrap::meleeAttack(std::string const& target)
{
    std::cout << "\033[1;33m" << this->name_ << " attacks " << target
              << " at melee, " << target << " damaged "
              << this->melee_attack_damage_ << " points!\033[0m" << std::endl;
}

// 공격 당함
void Fragtrap::takeDamage(unsigned int amount)
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
void Fragtrap::beRepaired(unsigned int amount)
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

void Fragtrap::vaulthunter_dot_exe(std::string const &target)
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