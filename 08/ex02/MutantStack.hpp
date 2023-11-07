/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:50:33 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:01:17 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template < typename T >
class MutantStack : public std::stack< T >
{
	public :
		MutantStack() : std::stack< T >() {}
		MutantStack(MutantStack const & stack) : std::stack< T >(stack) {}
		~MutantStack() {}

		MutantStack &	operator=(MutantStack const & stack) {
			if (this != &stack)
				std::stack< T >::operator=(stack);
			return *this;
		}

		typedef typename std::stack< T >::container_type::iterator iterator;
		iterator	begin() {
			return std::stack< T >::c.begin();
		}

		iterator	end() {
			return std::stack< T >::c.end();
		}
};

#endif