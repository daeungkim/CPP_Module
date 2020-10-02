/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 10:29:36 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/02 10:45:04 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T &min(T &a, T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T &max(T &a, T &b)
{
    if (a > b)
        return (a);
    return (b);
}

int main(void)
{
    //char
    std::cout << "=============================" << std::endl;
    char c1 = 'a', c2 = 'b';
    
    std::cout << "max = " << ::max(c1, c2) << std::endl;
    std::cout << "min = " << ::min(c1, c2) << std::endl;
    
    ::swap(c1, c2);
    std::cout << "swap c1 = " << c1 << " c2 = " << c2 << std::endl;

    // int
    std::cout << "=============================" << std::endl;
    int i1 = 3, i2 = 4;
    
    std::cout << "max = " << ::max(i1, i2) << std::endl;
    std::cout << "min = " << ::min(i1, i2) << std::endl;
    
    ::swap(i1, i2);
    std::cout << "swap i1 = " << i1 << " i2 = " << i2 << std::endl;

    // float
    std::cout << "=============================" << std::endl;
    float f1 = 1.2f, f2 = 3.4f;
    
    std::cout << "max = " << ::max(f1, f2) << std::endl;
    std::cout << "min = " << ::min(f1, f2) << std::endl;
    
    ::swap(f1, f2);
    std::cout << "swap f1 = " << f1 << " f2 = " << f2 << std::endl;

    // double
    std::cout << "=============================" << std::endl;
    double d1 = 5.6, d2 = 7.8;
    
    std::cout << "max = " << ::max(d1, d2) << std::endl;
    std::cout << "min = " << ::min(d1, d2) << std::endl;
    
    ::swap(d1, d2);
    std::cout << "swap d1 = " << d1 << " d2 = " << d2 << std::endl;

    // string
    std::cout << "=============================" << std::endl;
    std::string s1 = "aaaa", s2 = "bbbb";
    
    std::cout << "max = " << ::max(s1, s2) << std::endl;
    std::cout << "min = " << ::min(s1, s2) << std::endl;
    
    ::swap(s1, s2);
    std::cout << "swap s1 = " << s1 << " s2 = " << s2 << std::endl;
}

