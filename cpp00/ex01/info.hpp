/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:21:57 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/16 14:21:54 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>
# include <string>
# include <iomanip> // 정렬 함수 포함된 해더

class INFO
{
    private:
        std::string categorys[11];
        
    public:
        void        inputNewInfo(void);
        void        showInfo(void);
        std::string getCategory(int index);
};

#endif
