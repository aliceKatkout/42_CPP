/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:04 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/08 16:11:39 by avedrenn         ###   ########.fr       */
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
		void	parseInput(std::ifstream &in);

		bool	check_date(std::string line);
		bool	check_rate(std::string line);


	private :
		std::map<std::string, double>	_data_map;

};

#endif