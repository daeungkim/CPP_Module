/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:52:35 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/17 22:00:14 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// allocate to heap memory
void ponyOnTheHeap(void)
{
    PONY *pony = new PONY("singsong");
    std::cout << pony->getName() << std::endl;
    delete(pony);
}

void ponyOnTheStack(void)
{
    PONY pony("steven");
    std::cout << pony.getName() << std::endl; 
}

int main(void)
{
    std::cout << "========== Heap ==========" << std::endl;
    ponyOnTheHeap();
    std::cout << "========== Stack ==========" << std::endl;
    ponyOnTheStack();
}