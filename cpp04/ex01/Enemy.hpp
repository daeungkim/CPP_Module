/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:22:32 by seunkim           #+#    #+#             */
/*   Updated: 2020/09/25 11:31:05 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    private:
        int         hp_;
        std::string type_;

    public:
        Enemy(int hp, std::string const& type);
        Enemy(const Enemy& ref);
        Enemy& operator=(const Enemy& ref);
        virtual ~Enemy();
       
        std::string getType() const;
        int         getHp() const;
        
        virtual void takeDamage(int amount);
};

#endif