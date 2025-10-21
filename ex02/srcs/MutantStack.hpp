/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:02 by abakirca          #+#    #+#             */
/*   Updated: 2025/10/21 12:26:11 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
// #include <cxxabi.h>
// #include <memory>

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		MutantStack &operator=(MutantStack const &copy);
		~MutantStack();
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		// void print();
};

#include "MutantStack.tpp"

#endif
