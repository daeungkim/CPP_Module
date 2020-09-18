/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 02:04:16 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/18 10:53:17 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify() const
{
    std::stringstream ss;

    ss << /*"80x" << std::uppercase << std::hex << (unsigned long)*/this;
    
    return (ss.str());
}