/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:22:22 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/26 20:50:28 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
    std::cout << "========================================" << std::endl;
    
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;

    ISquad *vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    
    delete vlc;

    std::cout << "========================================" << std::endl;

    ISpaceMarine *aa = new TacticalMarine;
    ISpaceMarine *bb = new TacticalMarine; 
    ISpaceMarine *cc = new TacticalMarine;

    Squad *test = new Squad;
    
    test->push(aa);
    test->push(bb);
    test->push(cc);

    for (int i = 0; i < test->getCount(); i++)
    {
        std::cout << test->getUnit(i) << std::endl;
    }    

    ISpaceMarine *dd = new AssaultTerminator;

    Squad *test2 = new Squad;

    test2->push(dd); 

    *test2 = *test;

    for (int i = 0; i < test2->getCount(); i++)
    {
        std::cout << test2->getUnit(i) << std::endl;
    }    
    
    delete test2;
    delete test;

    std::cout << "========================================" << std::endl;

    ISpaceMarine *a = new TacticalMarine;
    ISpaceMarine *b = new AssaultTerminator;
    ISpaceMarine *c = new TacticalMarine;
    ISpaceMarine *d = new AssaultTerminator;
    ISpaceMarine *e = new TacticalMarine;
    ISpaceMarine *f = new AssaultTerminator;

    Squad *squad = new Squad;

    squad->push(a);
    squad->push(b); 
    squad->push(c);
    squad->push(d);
    squad->push(e);
    squad->push(f);
    
    Squad *squad_new = new Squad(*squad);

    std::cout << "    squad = " << squad << std::endl;
    std::cout << "squad_new = " << squad_new << std::endl; 

    for (int i = 0; i < squad->getCount(); i++)
    {
        std::cout << "    squad(" << i << ") = " << squad->getUnit(i) << std::endl;
        std::cout << "squad_new(" << i << ") = " << squad_new->getUnit(i) << std::endl;    
    }

    delete squad;
    delete squad_new;

    return 0;
}