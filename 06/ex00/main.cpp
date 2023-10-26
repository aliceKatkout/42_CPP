/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:47:32 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/26 15:42:48 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	ScalarConverter sc;

	sc.convert("0");
	sc.convert("nan");
	sc.convert("inf");
	sc.convert("inff");
	sc.convert("nanf");
	sc.convert("42.0f");
	sc.convert("42.0");
	sc.convert("42");
	sc.convert("42.2345f");

}