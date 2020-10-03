/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 20:58:51 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/04 03:05:14 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack &ref) : std::stack<T>(ref) {};
        MutantStack& operator=(const MutantStack &ref) {this->c = ref.c; return (*this);};
        virtual ~MutantStack() {};
        
        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

        iterator                begin()             {return this->c.begin(); };
        iterator                end()               {return this->c.end(); };
        
        const_iterator          begin() const       {return this->c.begin(); };
        const_iterator          end() const         {return this->c.end(); };

        reverse_iterator        rbegin()            {return this->c.rbegin(); };
        reverse_iterator        rend()              {return this->c.rend(); };

        const_reverse_iterator  rbegin() const      {return this->c.rbegin(); };
        const_reverse_iterator  rend() const        {return this->c.rend(); };
};

#endif