/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:31:58 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 17:22:14 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHAT_HPP
# define WHAT_HPP

#include <iostream>

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T min(T x, T y)
{
	return (x < y) ? x : y;
}

template <typename T> T max(T x, T y)
{
	return (x > y) ? x : y;
}

template <typename T> void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif