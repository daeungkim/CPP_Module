/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 23:33:35 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/01 00:52:11 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>

class Convertor
{
    private:
        std::string input_;
        Convertor();

    public:
        Convertor(std::string input);
        Convertor(const Convertor& ref);
        Convertor& operator=(const Convertor& ref);
        ~Convertor();
        
        void    printToChar();
        void    printToInt();
        void    printToFloat();
        void    printToDouble();
};

#endif