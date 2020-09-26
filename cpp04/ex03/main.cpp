/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:40:53 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/27 02:52:24 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // ICharacter* me = new Character("me");

    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // ICharacter* bob = new Character("bob");

    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    // delete src;

    std::cout << "==========================================" << std::endl;

    IMateriaSource *item_box = new MateriaSource();
    item_box->learnMateria(new Ice());
    item_box->learnMateria(new Ice()); 
    item_box->learnMateria(new Cure());
    item_box->learnMateria(new Cure());
    
    // 4개 까지 넣을 수 있음.
    item_box->learnMateria(new Ice());

    Character *steven = new Character("steven");
    Character *song = new Character("song");
    
    // No items!
    steven->use(0, *song);

    AMateria *m;
    // No match type!!;
    m = item_box->createMateria("fire");

    steven->equip(new Ice());
    steven->equip(new Ice());
    steven->equip(new Cure());
    steven->equip(new Cure());
    
    //items full!
    steven->equip(new Ice());

    for (int i = 0; i < 4; i++)
        steven->use(i, *song);

    steven->unequip(2);
    // No item!
    steven->use(2, *song);
    
    *song = *steven;
    for (int i = 0; i < 4; i++)
        song->use(i, *steven);
    
    Character *kim = new Character(*song);
    for (int i = 0; i < 4; i++)
        kim->use(i, *steven);

    delete item_box;

    delete steven;
    delete song;
    delete kim;

    delete m;

    return 0;
}