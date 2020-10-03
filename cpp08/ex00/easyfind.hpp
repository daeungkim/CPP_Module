/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:19:38 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/03 16:06:31 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class NotFoundException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "\033[1;31mEasyFindException: not found\033[0m";
        }
};

template <typename T>
typename T::iterator easyfind (T &container, int value)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        throw NotFoundException();
    return (iter);
}

#endif