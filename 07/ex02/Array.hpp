/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:07:41 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/06 13:19:46 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>

class Array
{
	public :
		Array() : _len(0) {
			_arr = new T[0];
		};
		Array(unsigned int n) {
			_arr = new T[n];
			_len = n;
		};
		Array(const Array &other) : _arr(NULL) {
			*this = other;
		};
		~Array() {
			if (_arr)
				delete []_arr;
		};

		const Array &operator=(const Array &other) {
			if (this != &other)
			{
				if (_arr)
					delete []_arr;
				_len = other._len;
				other._len > 0 ? _arr = new T[other._len] : _arr = NULL;
				for (unsigned int i = 0; i < other._len; i ++) {
					_arr[i] = other._arr[i];
				}
			}
			return (*this);
		}

		T &operator[](unsigned int index) {
			if (index >= _len)
				throw (std::invalid_argument("Index is invalid"));
			return (_arr[index]);
		}

		unsigned int	&size() {
			return (_len);
		}

	private :
		unsigned int	_len;
		T				*_arr;
};

#endif