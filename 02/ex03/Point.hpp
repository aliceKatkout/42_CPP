/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:45:46 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/10 17:48:54 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public :
		Point();
		Point(float x, float y);
		Point(const Point &p);
		~Point();

		Point	&operator=(const Point &p);

		const Fixed getX() const;
		const Fixed	getY() const;

	private :
		const Fixed	_x;
		const Fixed	_y;
};


Fixed sign (Point p1, Point p2, Point p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif