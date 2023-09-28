/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:47:33 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/28 09:09:44 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Contact deleted" << std::endl;
	return;
}

void	Contact::init()
{
	this->_first_name = this->_getInput("Enter your first name : ");
	this->_last_name = this->_getInput("Enter your last name : ");
	this->_nickname = this->_getInput("Enter your nickname : ");
	this->_phone_num = this->_getInput("Enter your phone number : ");
	this->_secret = this->_getInput("And now your darkest secret : ");
}

std::string	Contact::_getInput(std::string str)
{
	std::string input;

	std::cout << str << std::endl;
	std::getline(std::cin, input);
	return (input);
}