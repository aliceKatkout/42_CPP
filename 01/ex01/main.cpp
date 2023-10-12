/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:12:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/12 13:50:49 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	zombie1;
	Zombie	*horde;

	zombie1.announce();
	horde = zombieHorde(10, "Lenny");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	if (horde) delete[]horde;
	return (0);
}