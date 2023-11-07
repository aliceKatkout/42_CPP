/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:09:26 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 13:46:36 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
		std::srand(std::time(NULL));
		std::generate(l.begin(), l.end(), std::rand);

		Span span(l.size());

		span.addNumber(l.begin(), l.end());
		//span.addNumber(42);

		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;

}