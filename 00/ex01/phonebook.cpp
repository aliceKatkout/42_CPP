/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:31 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/27 16:53:15 by avedrenn         ###   ########.fr       */
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


