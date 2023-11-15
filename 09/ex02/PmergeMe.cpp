/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:59 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 18:12:44 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};
PmergeMe::PmergeMe(PmergeMe const & other) { *this = other; };
PmergeMe::~PmergeMe() {};

PmergeMe const &PmergeMe::operator=(PmergeMe const & other) {
	if (this != &other)
		*this = other;
	return (*this);
}

void	PmergeMe::parseInput(char **lines) {
	std::string str;
	if (!lines[1])
		throw PmergeMe::Error();
	for (int i = 1; lines[i]; i++) {
		str = lines[i];
		if (str.find_first_not_of("0123456789 ") != std::string::npos)
			throw PmergeMe::Error();
		_vec.push_back(std::atoi(lines[i]));
		_deq.push_back(std::atoi(lines[i]));
	}
}

void	PmergeMe::merge() {
	fj_sort(_vec);
	fj_sort(_deq);
}

void	PmergeMe::printDeq() {
	if (_deq.empty())
		return ;
	for (std::deque<unsigned int>::iterator it = _deq.begin(); it != _deq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printVec() {
	if (_vec.empty())
		return ;
	for (std::vector<unsigned int>::iterator it = _vec.begin(); it != _vec.end(); it++ ) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void	fj_sort(T &arr) {
	//ford johnson algorithm
	/* if (arr.size() <= 1)
		return ;
	typename T::iterator mid = arr.begin() + arr.size() / 2;
	T left(arr.begin(), mid);
	T right(mid, arr.end());

	typename T::iterator it_right = right.begin();
	for (typename T::iterator it_left = left.begin(); it_left != left.end(); it_left++)
	{
		if (*it_left > *it_right)
		{

		}

	} */

	/* if (arr.size() <= 1)
		return ;
	typename T::iterator mid = arr.begin() + arr.size() / 2;
	T left(arr.begin(), mid);
	T right(mid, arr.end());
	std::cout << "left :" << std::endl;
	for (typename T::iterator it = left.begin(); it != left.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "right :" << std::endl;
	for (typename T::iterator it2 = right.begin(); it2 != right.end(); it2++) {
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;
	fj_sort(left);
	fj_sort(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), arr.begin()); */
}