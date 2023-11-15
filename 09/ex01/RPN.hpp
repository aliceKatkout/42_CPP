/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:29:53 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 13:43:58 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <stack>
# include <cstdlib>

class RPN
{
	public :
		RPN();
		RPN(RPN const & other);
		~RPN();

		RPN const &operator=(RPN const & other);

		void	parseInput(std::string line);
		void	doOperation(std::string op);
		void	doPrint();

	private :
		std::stack<double>	_stack;
		double				_result;
};

#endif