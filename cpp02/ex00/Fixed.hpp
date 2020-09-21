/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:42:54 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/21 17:29:31 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int              value_;
        const static int BITS = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& ref);
        Fixed& operator=(const Fixed& ref);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);  
};

#endif