/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:25 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/09 13:24:21 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl() {};

void	Harl::complain(std::string level)
{
	void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << GREEN << "This is DEBUG level" << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYAN << "This is INFO level" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "This is WARNING level" << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "This is ERROR level" << std::endl;
}