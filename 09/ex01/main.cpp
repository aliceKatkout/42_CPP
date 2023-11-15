/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:31:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 14:53:09 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}

	RPN rpn;
	std::string line;
	line = argv[1];
	if (rpn.parseInput(line))
		rpn.execute(line);
	return (0);
}