/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:43:31 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/06 16:53:44 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
# define EASY_HPP

#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>
#include <list>

class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Not found");
			}
};

template <typename T>
typename T::iterator easyfind(T list, int n)
{
	std::list<int>::iterator it = std::find(list.begin(), list.end(), n);
	if (it == list.end())
		throw NotFoundException();
	return (it);
}


#endif