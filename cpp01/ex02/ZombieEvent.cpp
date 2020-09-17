/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 22:13:29 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 00:37:45 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, type));
}

void ZombieEvent::randomChump()
{
    std::string names[4] = {"steven", "song", "kim", "hannah"};
    Zombie zombie(names[rand() % 4], type);
    zombie.announce();
}


