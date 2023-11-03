/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:00:15 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 15:10:18 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
	public :
		Serializer();
		Serializer(const Serializer &other);
		~Serializer();

		const Serializer	&operator=(const Serializer	&other);

		uintptr_t		serialize(Data* ptr);
		Data*			deserialize(uintptr_t raw);

};

#endif