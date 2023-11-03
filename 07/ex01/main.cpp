/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:54:17 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 18:55:58 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main() {

	std::string names[] = {"Alice", "Albi", "Demain", "Joue"};
	std::cout << "Strings :" << std::endl;
	iter(names, 4, printTab);
	std::cout << std::endl;

	int integers[] = {1, 12, 13, 24, 25, 26, 27};
	std::cout << "Integers :" << std::endl;
	iter(integers, 8, printTab);
	std::cout << std::endl;

	return (0);
}