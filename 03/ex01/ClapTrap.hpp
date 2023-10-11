/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:06:49 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 15:26:28 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &obj);
		~ClapTrap();

		std::string	getName() const;
		int			getEnergy() const;
		int			getHit() const;
		int			getDamage() const;

		void		setName(std::string name);
		void		setEnergy(unsigned int amount);
		void		setHit(unsigned int amount);
		void		setDamage(unsigned int amount);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private :
		std::string		_name;
		int				_hit;
		int				_energy;
		int				_damage;

};

#endif