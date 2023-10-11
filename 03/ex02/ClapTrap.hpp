/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:06:49 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 15:46:11 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RESET "\x1B[0m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[37m"

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