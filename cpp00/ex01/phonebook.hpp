/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:22:17 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/16 14:34:41 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "info.hpp"

class PHONEBOOK
{
    private:
        int  last_index;
        INFO infos[8];
    
    public:
        PHONEBOOK(void);
        void showMenu(void);
        void addNewInfo(void);
        void showAllInfos(void);
};

#endif
