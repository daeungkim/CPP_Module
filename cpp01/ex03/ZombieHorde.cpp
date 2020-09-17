/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:51:29 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 01:37:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{   
    n = N;

    std::string names[4] = {"steven", "song", "kim", "hannah"};
    std::string types[4] = {"walkers", "runners", "crawlers", "bonies"};
    
    zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setAttr(names[rand() % 4], types[rand() % 4]);
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] zombies;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < n; i++)
        zombies[i].announce();
}