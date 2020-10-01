/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 23:33:37 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/01 16:24:24 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"
#include <cmath>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: only input one argument!" << std::endl;
        return (0);
    }

    Convertor convertor(argv[1]);

    convertor.printToChar();
    convertor.printToInt();
    convertor.printToFloat();
    convertor.printToDouble();

}

