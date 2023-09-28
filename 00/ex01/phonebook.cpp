/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:31 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/28 09:14:24 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0)
{
	std::cout << "PhoneBook created" << std::endl;
	std::cout << this->_index << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::welcome(void) const
{
	std::cout << std::endl;
	std::cout << "📞 Welcome to PhoneBook 📖" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << "ADD\t: Add a contact." << std::endl;
	std::cout << "SEARCH\t: Search for a contact." << std::endl;
	std::cout << "EXIT\t: Quit the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::add()
{
	if (this->_index < 7)
	{
		this->_contacts[this->_index].init();
		this->_index ++;
	}
	else
		this->_contacts[this->_index].init();
}
