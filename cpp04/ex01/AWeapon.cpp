/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 21:38:07 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 17:20:15 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, int ap_cost, int damage)
    :name_(name), ap_cost_(ap_cost), damage_(damage)
{
    std::cout << "AWeapon(" << name_ << ") created!" << std::endl;
}

AWeapon::AWeapon(const AWeapon& ref)
{
    *this = ref;
}

AWeapon& AWeapon::operator=(const AWeapon& ref)
{
    this->name_ = ref.name_;
    this->ap_cost_ = ref.ap_cost_;
    this->damage_ = ref.damage_;
    return (*this);
}

AWeapon::~AWeapon()
{
    std::cout << "AWeapon(" << name_ << ") destroyed!" << std::endl;
}

std::string AWeapon::getName() const
{
    return (this->name_);
}

int AWeapon::getApCost() const
{
    return (this->ap_cost_);
}

int AWeapon::getDamage() const
{
    return (this->damage_);
}
