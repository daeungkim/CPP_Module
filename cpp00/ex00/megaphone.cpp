/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a42 <a42@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:42:03 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/15 16:12:52 by a42              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    
    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            argv[i][j] = toupper(argv[i][j]);       // lower -> upper
            j++;
        }
        std::cout << argv[i] << " ";
        i++;
    }
    std::cout << std::endl;         // endl -> "\n"
    return (0);
}
    

