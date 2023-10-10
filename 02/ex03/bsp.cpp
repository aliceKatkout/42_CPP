/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:45:39 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/10 17:42:17 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3)
{
	return Fixed(p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	Fixed zero;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 < zero) || (d2 < zero) || (d3 < zero);
	has_pos = (d1 > zero) || (d2 > zero) || (d3 > zero);

	return !(has_neg && has_pos);
};

/* Maybe the most famous method, based on dot product. We assume that p1, p2, p3 are ordered in counterclockwise. Then we can check if p lies at left of the 3 oriented edges [p1, p2], [p2, p3] and [p3, p1].

For that, first we need to consider  the 3 vectors v1, v2 and v3 that are respectively left-orthogonal to [p1, p2], [p2, p3] and [p3, p1] :

v1 = <y2 - y1, -x2 + x1>
v2 = <y3 - y2, -x3 + x2>
v3 = <y1 - y3, -x1 + x3>

Then we get the 3 following vectors :

v1' = <x - x1, y - y1>
v2' = <x - x2, y - y2>
v3' = <x - x3, y - y3>

At last, we compute the 3 dot products :
dot1 = v1 . v1' = (y2 - y1)*(x - x1) + (-x2 + x1)*(y - y1)
dot2 = v1 . v2' = (y3 - y2)*(x - x2) + (-x3 + x2)*(y - y2)
dot3 = v3 . v3' = (y1 - y3)*(x - x3) + (-x1 + x3)*(y - y3)

Finally, we can apply the interesting property :

p lies in T if and only if 0 <= dot1 and 0 <= dot2 and 0 <= dot3 */