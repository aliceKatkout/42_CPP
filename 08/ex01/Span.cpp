/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:02:53 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:51:29 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size_max(N) {
	_numbers.reserve(N);
}

Span::Span(Span const & span) {
	*this = span;
}

Span::~Span() {}

Span &	Span::operator=(Span const & span) {
	if (this != &span) {
		_numbers = span._numbers;
		_size_max = span._size_max;
	}
	return *this;
}

const std::vector< int >* Span::getNumbers( void ) const {
	return &_numbers;
}

void	Span::addNumber(unsigned int n) {
	if (_numbers.size() != _size_max)
		_numbers.push_back(n);
	else
		throw AtCapacityException();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) + _numbers.size() <= _size_max)
		_numbers.insert(_numbers.end(), begin, end);
	else
		throw AtCapacityException();
}

int		Span::shortestSpan() {
	if (_numbers.size() <= 1)
		throw EmptyException();
	sort(_numbers.begin(), _numbers.end());
	int res = _numbers[_numbers.size() - 1] - _numbers[0];
	for ( std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it ) {
		for ( std::vector<int>::const_iterator it2 = _numbers.begin(); it2 != _numbers.end(); ++it2 ) {
			if ( it == it2 ) continue;
			if ( std::abs( *it2 - *it ) <  static_cast<int>(res) )
			res = std::abs( *it2 - *it );
		}
	}
	return (res);
}

int		Span::longestSpan() {
	if (_numbers.size() <= 1)
		throw EmptyException();
	sort(_numbers.begin(), _numbers.end());
	return (_numbers[_numbers.size() - 1] - _numbers[0]);
}