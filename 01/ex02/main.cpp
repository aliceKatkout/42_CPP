/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:17:58 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 17:33:21 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of str : " << &str << std::endl;
	std::cout << "Adress in stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress of stringREF : " << &stringREF << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value in stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;

	return (0);
}