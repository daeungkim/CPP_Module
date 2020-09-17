/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:07:09 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 00:45:34 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{   
    // created by my self
    Zombie zombie("42", "Walkers");
    zombie.announce();

    // created by zombieevent
    ZombieEvent zombieEvent;
    zombieEvent.setZombieType("Runners");

    // new zombie
    Zombie *new_zombile = zombieEvent.newZombie("new_zombie");

    new_zombile->announce();
    
    delete (new_zombile);
    
    // random name zombie    
    zombieEvent.randomChump();
}