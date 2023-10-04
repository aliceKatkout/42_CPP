/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:47:33 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 12:06:10 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _first_name(""), _last_name(""),_nickname(""),_phone_num(""),_secret("")
{
	return ;
}

Contact::~Contact()
{
	return;
}

void	Contact::init()
{
	_first_name = _getInput("Enter your first name : ");
	if (_first_name.empty())
		exit(1);
	_last_name = _getInput("Enter your last name : ");
	if (_last_name.empty())
		exit(1);
	_nickname = _getInput("Enter your nickname : ");
	if (_nickname.empty())
		exit(1);
	_phone_num = _getInput("Enter your phone number : ");
	if (_phone_num.empty())
		exit(1);
	_secret = _getInput("And now your darkest secret : ");
	if (_secret.empty())
		exit(1);
}

std::string	Contact::_getInput(std::string str)
{
	std::string input = "";

	while (input.empty())
	{
		std::cout << str << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (input);
	}
	return (input);
}

std::string	Contact::_print_ten(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::print(int i) const
{
	if (_first_name.empty())
		return ;
	std::cout << i << " | " << std::flush;
	std::cout << std::setw(10) << _print_ten(_first_name) << " | " << std::flush;
	std::cout << std::setw(10) << _print_ten(_last_name) << " | " << std::flush;
	std::cout << std::setw(10) << _print_ten(_nickname) << " | " << std::flush;
	std::cout << std::endl;
}

void    Contact::view_contact(int i) const
{
    std::cout << "----------CONTACT " << i << "----------" << std::endl;
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phone_num << std::endl;
    std::cout << "Darkest secret: " << _secret << std::endl;
}