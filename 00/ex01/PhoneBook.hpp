/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:01:16 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/28 08:57:30 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"



class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		add(void);
		void		search(void);
		void		welcome(void) const;

	private:
		int			_index;
		Contact		_contacts[8];



};

#endif