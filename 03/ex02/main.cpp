/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:06:11 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:00 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap	a("Alex");
	ClapTrap	b("Player 2");
	ScavTrap	s("Guardian Lisa");
	FragTrap	f("Nice guy Harry");

	a.attack("Jul");
	b.takeDamage(10);
	a.beRepaired(10);
	s.attack("void");
	s.guardGate();
	f.highFivesGuys();

	return 0;
}