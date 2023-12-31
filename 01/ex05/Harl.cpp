/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:25 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/09 13:51:00 by avedrenn         ###   ########.fr       */
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
	std::cout << GREEN << "[DEBUG]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do !" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYAN << "[INFO]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn't put "
		<< "enough bacon in my burger ! If you did, I wouldn't be asking for more !" <<  RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]" << std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been coming "
		<< "for years whereas you started working here since last month." <<  RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ERROR]" << std::endl
		<< "This is unacceptable ! I want to speak to the manager now." <<  RESET << std::endl;
}
