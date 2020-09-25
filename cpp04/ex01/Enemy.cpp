/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:22:36 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 19:30:49 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& type)
    : hp_(hp), type_(type)
{
    std::cout << "Enemy created!" << std::endl;
}

Enemy::Enemy(const Enemy& ref)
{
    *this = ref;
}

Enemy& Enemy::operator=(const Enemy& ref)
{
    this->hp_ = ref.hp_;
    this->type_ = ref.type_;
    return (*this);
}

Enemy::~Enemy()
{
    std::cout << "Enemy destoryed!" << std::endl;
}

int Enemy::getHp() const
{
    return (this->hp_);
}

std::string Enemy::getType() const
{
    return (this->type_);
}

void Enemy::takeDamage(int damage)
{
    this->hp_ -= damage;
    if (this->hp_ < 0)
        this->hp_ = 0;
    std::cout << "\033[1;31m" << "take Damage! Now hp is " << this->hp_ << "\033[0m" << std::endl;
}