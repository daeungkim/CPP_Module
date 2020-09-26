/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:30:17 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 03:15:17 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
    // Character* me = new Character("me");

    // std::cout << *me;

    // Enemy* b = new RadScorpion();

    // AWeapon* pr = new PlasmaRifle();
    // AWeapon* pf = new PowerFist();

    // me->equip(pr);
    // std::cout << *me;
    // me->equip(pf);

    // me->attack(b);
    // std::cout << *me;
    // me->equip(pr);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
    // me->attack(b);

    Character* steven = new Character("steven");
    
    std::cout << *steven;

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    steven->equip(pr);
    std::cout << *steven;
    steven->equip(pf);
    std::cout << *steven;

    Enemy *rs = new RadScorpion();
    Enemy *sm = new SuperMutant();

    // hp = 80, powerfist attack = 50
    steven->attack(rs);
    steven->attack(rs);

    // hp = 170, attack = 50 - 3
    steven->attack(sm);
    steven->attack(sm);
    steven->attack(sm);
    steven->attack(sm);
    
    std::cout << *steven;

    // ap 10 * 3 recover
    steven->recoverAp();
    steven->recoverAp();
    steven->recoverAp();
    
    std::cout << *steven; 
    
    steven->equip(pr);
    
    steven->attack(sm);
    steven->attack(sm);
    
    delete steven;

    delete pr;
    delete pf;

    // 이미 죽음
    //delete rs;
    //delete sm;    
    
    return 0;
}