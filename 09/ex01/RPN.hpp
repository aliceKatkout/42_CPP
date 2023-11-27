/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:29:53 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/27 14:46:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <stack>
# include <cstdlib>
# include <list>

class RPN
{
	public :
		RPN();
		RPN(RPN const & other);
		~RPN();

		RPN const &operator=(RPN const & other);

		bool	parseInput(std::string line);
		void 	execute(std::string line);
		void	doOperation(std::string op);

		class Error : public std::exception {
			public :
				const char *what() const throw() {
					return ("Error.");
				}
		};

	private :
		std::stack<double, std::list<double> >	_stack;
		double				_result;
};

#endif