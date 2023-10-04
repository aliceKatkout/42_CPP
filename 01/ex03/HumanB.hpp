/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:42:22 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 18:00:52 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon weapon);

	private :
		Weapon		_weapon;
		std::string	_name;

};

#endif