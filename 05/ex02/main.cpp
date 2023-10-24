/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:44:27 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 16:10:43 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 132);

	Bureaucrat & bob_ref = bob;
	Bureaucrat & bill_ref = bill;


	return (0);
}