/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:45:43 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/10 17:26:19 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {};
Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {};
Point::Point(const Point &p) : _x(Fixed(p._x)), _y(Fixed(p._y)) {};
Point::~Point() {};

Point	&Point::operator=(const Point &p)
{
	(Fixed) _x = p._x;
	(Fixed) _y = p._y;
	return (*this);
}

const Fixed	Point::getX() const
{
	return _x;
}

const Fixed	Point::getY() const
{
	return _y;
}