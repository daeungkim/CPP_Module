/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 21:33:21 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/26 19:25:32 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
        int             count_;
        ISpaceMarine**  units_;

    public:
        Squad();
        Squad(const Squad& ref);
        Squad& operator=(const Squad& ref);
        ~Squad();

        int             getCount() const;
        ISpaceMarine*   getUnit(int index) const;
        int             push(ISpaceMarine* unit);
};

#endif