/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:37:05 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/06 14:51:39 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
	try {
		std::cout << "----------- TEST1: Empty Array -----------" << std::endl;
		Array <int> a;
		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << a[i] << std::endl;
		}
		std::cout << a.size() << std::endl;
		std::cout << std::endl;

		std::cout << "--------- TEST2: Array of size 10 ---------" << std::endl;
		Array <int> b(10);
		for (unsigned int i = 0; i < b.size(); i++) {
			b[i] = i;
			std::cout << "b[" << i << "] = " << b[i] << "	";
		}
		std::cout << std::endl;

		std::cout << "--------- TEST2: Copy of an array ---------" << std::endl;
		Array <int> c(b);
		for (unsigned int i = 0; i < c.size(); i++) {
			std::cout << "c[" << i << "] = " << c[i] << "	";
		}
		std::cout << std::endl;

		std::cout << "--------- TEST3: Operateur d'assignation (=) ---------" << std::endl;
		Array <int> d;
		d = c;
		for (unsigned int i = 0; i < d.size(); i++) {
			std::cout << "d[" << i << "] = " << d[i] << "	";
		}

		std::cout << std::endl;
		std::cout << "--------- TEST4: Exeception (OOB) ---------" << std::endl;
		for (unsigned int i = 0; i < 20; i++) {
			d[i] = i;
			std::cout << "d[" << i << "] = " << d[i] << "	";
		}
		std::cout << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);

}