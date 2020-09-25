/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 15:30:59 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 19:28:53 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& name)
    : name_(name), ap_(40), weapon_(NULL)
{
    std::cout << "Character(" << name_ << ") created!" << std::endl;
}

Character::Character(const Character& ref)
{
    *this = ref;
}

Character& Character::operator=(const Character& ref)
{
    this->name_ = ref.getName();
    this->ap_ = ref.getAp();
    this->weapon_ = ref.getWeapon();
    return (*this);
}

Character::~Character()
{
    std::cout << "Character(" << name_ << ") destroyed!" << std::endl;
}

void Character::recoverAp()
{
    this->ap_ += 10;
    if (this->ap_ > 40)
        this->ap_ = 40;
}

void Character::equip(AWeapon* weapon)
{
    this->weapon_ = weapon;    
}

void Character::attack(Enemy* enemy)
{   
    // 무기 없으면 종료
    if (!weapon_)
    {
        std::cout << "No Weapon!!" << std::endl;
        return ;
    }
    // ap 없으면 사용 못함.
    if (ap_ < weapon_->getApCost())
    {
        std::cout << "Need more AP!" << std::endl;
        return ;
    }
    std::cout << "\033[1;33m"
              << name_ << " attacks "
              << enemy->getType() << " with a "
              << weapon_->getName()
              << "\033[0m" << std::endl;

    // ap 소모
    this->ap_ -= weapon_->getApCost();
    // 무기 attack
    weapon_->attack();
    // 적이 데미지 입음
    enemy->takeDamage(weapon_->getDamage());
    // 적 hp 0 이하면 죽음
    if (enemy->getHp() <= 0)
        delete (enemy);
}

std::string Character::getName() const
{
    return (this->name_);
}

int Character::getAp() const
{
    return (this->ap_);
}

AWeapon* Character::getWeapon() const
{
    return (this->weapon_);
}

std::ostream const& operator<<(std::ostream& out, Character& character)
{   
    if(character.getWeapon() == NULL)
    {
        out << "\033[1;34m"
            << character.getName() << " has " 
            << character.getAp() << " AP and is unarmed" 
            << "\033[0m" << std::endl;
    }
    else
    {
        out << "\033[1;34m"
            << character.getName() << " has " 
            << character.getAp() << " AP and wields a " 
            << character.getWeapon()->getName() 
            << "\033[0m" << std::endl;
    }
    return (out);
}
