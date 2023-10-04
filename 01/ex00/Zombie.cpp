/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:25 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 13:50:52 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Mother";
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " destroyed !" << std::endl;
}

void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}