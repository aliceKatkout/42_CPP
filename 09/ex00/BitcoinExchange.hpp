/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:04 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 18:38:10 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
# define BTC_HPP

# include <iostream>
# include <map>

class Btc
{
	public :
		Btc(std::string input_file);
		Btc(Btc const & other);
		~Btc();

		Btc const &operator=(Btc const & other);

		void	parseInput();



	private :
		std::map<std::string, double>	_map;

};

#endif