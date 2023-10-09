/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:25 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/09 14:20:53 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl() {};

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	setLevel(5);
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			setLevel(i);
			break ;
		}
	}
	filter();
}

void	Harl::filter()
{
	switch (_level)
	{
		case 0 :
			_debug();
		case 1 :
			_info();
		case 2 :
			_warning();
		case 3 :
			_error();
			break ;
		default :
			std::cout << "You must enter one of the following level :" << std::endl
				<< "- DEBUG \n" << "- INFO \n" << "- WARNING \n" << "- ERROR \n";
	}

}

void	Harl::setLevel(int i)
{
	_level = i;
}

void	Harl::_debug(void)
{
	std::cout << GREEN << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do !" << RESET << std::endl;
}

void	Harl::_info(void)
{
	std::cout << CYAN << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn't put "
		<< "enough bacon in my burger ! If you did, I wouldn't be asking for more !" <<  RESET << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << YELLOW << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been coming "
		<< "for years whereas you started working here since last month." <<  RESET << std::endl;
}

void	Harl::_error(void)
{
	std::cout << RED << "[ ERROR ]" << std::endl
		<< "This is unacceptable ! I want to speak to the manager now." <<  RESET << std::endl;
}
