/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:53:48 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 17:43:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
/* 	char a = 'a';
	char b = 'b';

	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of b : " << b << std::endl;
	std::cout << "Min : " << min<char>(a, b) << std::endl;
	std::cout << "Max : " << max<char>(a, b) << std::endl;
	swap<char>(a,b);
	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of b : " << b << std::endl;

	int i = 1;
	int j = 2;

	std::cout << "Value of i : " << i << std::endl;
	std::cout << "Value of j : " << j << std::endl;
	std::cout << "Min : " << min<int>(i, j) << std::endl;
	std::cout << "Max : " << max<int>(i, j) << std::endl;
	swap<int>(i,j);
	std::cout << "Value of i : " << i << std::endl;
	std::cout << "Value of j : " << j << std::endl; */

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

}