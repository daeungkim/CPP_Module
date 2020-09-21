/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:45:42 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/21 23:59:15 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int              value_;
        const static int BITS = 8;

    public:
        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();
        Fixed(const Fixed& ref);
        Fixed& operator=(const Fixed& ref);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream& operator << (std::ostream& os, const Fixed& ref);

#endif