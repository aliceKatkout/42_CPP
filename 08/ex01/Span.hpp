/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:01:48 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 13:28:42 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public :
		Span(unsigned int N);
		Span(Span const & span);
		~Span();

		Span &	operator=(Span const & span);

		void	addNumber(unsigned int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		const std::vector< int >* getNumbers( void ) const;
		int		shortestSpan();
		int		longestSpan();

		class AtCapacityException : public std::exception {
			public:
				virtual const char	*what () const throw() {
					return "Span has no space left.";
				}
		};

		class EmptyException : public std::exception {
			public:
				virtual const char	*what () const throw() {
					return "Span is emptyor has only one element.";
				}
		};


	private :
		std::vector<int>	_numbers;
		unsigned int		_size_max;
};


#endif