/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:51:16 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 17:35:12 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
		Character();
		Character(std::string name);
		Character(const Character &other);
		~Character();

		Character	&operator=(const Character &other);

		std::string const 	&getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private :
		std::string		_name;
		AMateria		*_inventory[4];
		int				_idx_max;

};

#endif