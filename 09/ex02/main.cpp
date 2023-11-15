/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:36:02 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 17:08:30 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: ./pmerge [numbers to sort]" << std::endl;
		return (1);
	}

	PmergeMe pm;
	try {
		pm.parseInput(argv);
		pm.printVec();
		pm.printDeq();
		pm.merge();
		pm.printVec();
		pm.printDeq();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}