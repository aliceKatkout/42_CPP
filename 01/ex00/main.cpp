/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:16 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 14:23:02 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	Zombie *zombie2;

	zombie1.announce();
	zombie2 = zombie1.newZombie("Charles");
	zombie2->announce();
	zombie1.randomChump("Lise");
	delete(zombie2);
	return (0);
}