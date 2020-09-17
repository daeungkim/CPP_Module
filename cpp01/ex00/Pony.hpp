/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:52:41 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/17 15:59:23 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class PONY
{
    private:
        std::string name;

    public:
        PONY(std::string name);
        ~PONY(void);
        std::string getName(void);
};

#endif