/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 19:03:43 by seunkim           #+#    #+#             */
/*   Updated: 2020/10/03 20:07:35 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
    private:
        unsigned int        size_;
        std::vector<int>    vec_;
        Span();
        
    public:
        Span(unsigned int n);
        Span(const Span &ref);
        Span& operator=(const Span &ref);
        ~Span();

        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();     

        void    showElements();
};

#endif