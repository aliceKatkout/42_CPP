/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:31 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/22 15:39:14 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	std::cout << "PhoneBook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::add(Contact contact)
{
	contacts[index] = contact;
	index ++;
}

Contact::Contact(void)
{
	this->index = 0;
	std::cout << "Welcome !" << std::endl;
	std::cout << "Enter your first name : "; std::cin >> this->first_name;
	std::cout << "Enter your last name : "; std::cin >> this->last_name;
	std::cout << "Enter your nickname : "; std::cin >> this->nickname;
	std::cout << "Enter your phone number : "; std::cin >> this->phone_num;
	std::cout << "Enter your first name : "; std::cin >> this->first_name;
	std::cout << "And now your darkest secret : "; std::cin >> this->secret;
	return ;
}



int main(void)
{
	PhoneBook phonebook;
	Contact		new_con;


	phonebook.add(new_con);
	return (0);
}
