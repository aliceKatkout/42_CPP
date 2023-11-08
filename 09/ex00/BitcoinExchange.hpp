/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:04 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/08 14:50:26 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
# define BTC_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <cstdlib>

class Btc
{
	public :
		Btc(std::string &database);
		Btc(Btc const & other);
		~Btc();

		Btc const &operator=(Btc const & other);

		void	makeMap(std::string &database);
		void	parseInput();


	private :
		std::map<std::string, double>	_map;

};

#endif