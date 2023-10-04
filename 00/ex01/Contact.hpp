/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:21:54 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 11:58:18 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	init(void);
		void	print(int i) const;
		void	view_contact(int i) const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_num;
		std::string	_secret;

		std::string	_getInput(std::string str);
		std::string	_print_ten(std::string str) const;
};

#endif