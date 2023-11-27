/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:25:23 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/27 13:58:26 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <deque>
# include <ctime>
# include <chrono>

class PmergeMe
{
	public :
		PmergeMe();
		PmergeMe(PmergeMe const & other);
		~PmergeMe();

		PmergeMe const &operator=(PmergeMe const & other);


		void 	parseInput(char **lines);
		void	merge_insert_sort();

		class Error : public std::exception {
			public :
				const char *what() const throw() {
					return ("Error.");
				}
		};

	private :
		std::vector<unsigned int>			_vec;
		std::deque<unsigned int>			_deq;

		std::vector<std::pair<unsigned int, unsigned int> >	_vpairs;
		std::deque<std::pair<unsigned int, unsigned int> >	_dpairs;


};

template <typename T, typename U>
void	fj_sort(T &arr, U &pairs);

template <typename T>
void	printArr(T &arr);


#endif