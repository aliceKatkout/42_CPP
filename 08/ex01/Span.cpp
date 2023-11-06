/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:02:53 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/06 18:36:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size_max(N) {
	_numbers.reserve(N);
}

Span::~Span() {}

void	Span::addNumber(unsigned int n) {
	if (_numbers.size() != _size_max)
		_numbers.push_back(n);
	else
		throw AtCapacityException();
}

int		Span::shortestSpan() {
	if (_numbers.size() <= 1)
		throw EmptyException();
	sort(_numbers.begin(), _numbers.end());
	int res = _numbers[_numbers.size() - 1] - _numbers[0];

	return (0);
}

int		Span::longestSpan() {
	if (_numbers.size() <= 1)
		throw EmptyException();
	sort(_numbers.begin(), _numbers.end());
	return (_numbers[_numbers.size() - 1] - _numbers[0]);
}