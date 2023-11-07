/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:09:26 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 15:34:19 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	try {
		std::vector<int>	l(10000);
		std::srand(1);
		std::generate(l.begin(), l.end(), std::rand);

		Span span(l.size());

		span.addNumber(l.begin(), l.end());
		//span.addNumber(42);

		sort(l.begin(), l.end());
		std::cout << "First value  : " << *l.begin() << std::endl;
		std::cout << "Last value   : " << *--l.end() << std::endl;

		std::cout << "Longest span : " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;

}