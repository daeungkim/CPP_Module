/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 21:17:46 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 21:19:17 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;
};

#endif