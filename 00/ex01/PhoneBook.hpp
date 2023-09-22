/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:01:16 by avedrenn          #+#    #+#             */
/*   Updated: 2023/09/22 15:38:55 by avedrenn         ###   ########.fr       */
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

		void		add(Contact contact);
		void		search(void);

	private:
		int			index;
		Contact		contacts[8];



};

#endif