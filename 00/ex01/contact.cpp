/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:47:33 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/27 16:51:53 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->index = 0;
	std::cout << "Welcome !" << std::endl;
	std::cout << "Enter your first name : "; std::cin >> this->first_name;
	std::cout << "Enter your last name : "; std::cin >> this->last_name;
	std::cout << "Enter your nickname : "; std::cin >> this->nickname;
	std::cout << "Enter your phone number : "; std::cin >> this->phone_num;
	std::cout << "And now your darkest secret : "; std::cin >> this->secret;
	return ;
}

Contact::~Contact()
{
	std::cout << "Contact deleted" << std::endl;
	return;
}