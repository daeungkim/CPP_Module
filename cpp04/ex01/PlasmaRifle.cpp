/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 22:18:43 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 17:20:24 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
    :AWeapon("Plasma Rifle", 5, 21)
{
    std::cout << "PlasmaRifle created!" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
    std::cout << "PlasmaRifle destroyed!" << std::endl;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

