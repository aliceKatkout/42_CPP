/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:47:28 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/17 16:00:53 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASRC_HPP
# define MATERIASRC_HPP

# include <string>
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &other);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);

	private :
		AMateria	*_stock[4];
		int			_idx;
};

#endif