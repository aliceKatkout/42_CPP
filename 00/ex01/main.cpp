/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:53:02 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 11:47:19 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	phonebook.welcome();
	do {

		std::cout << std::endl << "Enter an action: ";
		std::getline(std::cin, input);

		if (input.compare("ADD") == 0)
			phonebook.add();
		else if(input.compare("SEARCH") == 0)
		{
			phonebook.print();
			phonebook.search();
			std::cin.ignore();
		}
	} while (input.compare("EXIT") || !std::cin.eof());
	std::cout << std::endl << "Bye 👋 " << std::endl;
	return (0);
}