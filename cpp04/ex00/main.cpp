/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:38:00 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 03:30:07 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"

int main(void)
{
    // Sorcerer robert("Robert", "the Magnificent");

    // //Victim *jim = new Victim("Jimmy");
    // //Victim *joe = new Peon("Joe");

    // Victim jim("Jimmy");
    // Peon joe("Joe");    
   
    // std::cout << robert << jim << joe; 
    // // std::cout << robert << *jim << *joe;

    // robert.polymorph(jim);
    // robert.polymorph(joe);

    // // delete(joe);
    // // delete(jim);

    Sorcerer steven("steven", "Docter");

    Victim *song = new Victim("song");
    Victim *kim = new Peon("kim");

    song->getPolymorphed();
    kim->getPolymorphed();

    steven.polymorph(*song);
    steven.polymorph(*kim);

    std::cout << steven << *song << *kim;

    return 0;
}