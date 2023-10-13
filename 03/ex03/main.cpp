/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:06:11 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 13:34:07 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap a("Billy");
	DiamondTrap b("Lucy");

	a.whoAmI();
	b.whoAmI();
	b = a;
	b.whoAmI();
	return 0;
}