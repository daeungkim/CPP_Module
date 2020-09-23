/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:42:54 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/22 01:29:03 by seunkim          ###   ########.fr       */
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
        Fixed();                            // 생성자
        ~Fixed();                           // 소멸자
        Fixed(const Fixed& ref);            // 복사 생성자
        Fixed& operator=(const Fixed& ref); // =연산자 오버로딩
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);  
};

#endif