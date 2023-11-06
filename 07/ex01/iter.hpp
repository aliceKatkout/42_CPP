/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:45:12 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/06 13:07:08 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>

void iter(T *arr, int len, void (*f)(T const &)) {
	for (int i = 0; i < len; i++)
		f(arr[i]);
};

template <typename T>

void printTab(T const &elem) {
	std::cout << elem << " - ";
}

#endif