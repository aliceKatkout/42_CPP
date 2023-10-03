/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:31 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/03 15:53:59 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0)
{
	std::cout << "PhoneBook created" << std::endl;
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
	this->_index ++;
	if (this->_index <= 8)
		this->_contacts[this->_index - 1].init();
	else
	{
		std::cout << "Phonebook is full, erasing last contact ..." << std::endl;
		this->_contacts[7].init();
		this->_index --;
	}
	std::cout << std::endl << "Thanks for adding a new contact 😀" << std::endl;
}

void	PhoneBook::print() const
{
	int	i;

	i = 0;
	while (this->_index > 0 && i <= this->_index)
	{
		this->_contacts[i].print(i + 1);
		i ++;
	}

}

void	PhoneBook::search() const
{
	int	id;

	if (this->_index == 0)
	{
		std::cout << std::endl << "Add new contact first 🙏" << std::endl;
		return;
	}
	std::cout << "Enter the id of the contact you want to display :" << std::endl;
	std::cin >> id;
	if (std::cin.fail() || id < 0 || id > this->_index - 1)
	{
		std::cout << "Wrong id, what are you doing ? 🥹" << std::endl;
		std::cin.clear();
	}
	else
		this->_contacts[id].view_contact(id + 1);
	return ;
}