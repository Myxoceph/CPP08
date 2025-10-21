/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:07 by abakirca          #+#    #+#             */
/*   Updated: 2025/10/21 12:46:21 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
	*this = other;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &copy)
{
	if (this != &copy)
	{
		this->c = copy.c;
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	this->c.clear();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

// template <typename T>
// void MutantStack<T>::print()
// {
// 	int status;
// 	char *realname = abi::__cxa_demangle(
// 		typeid(typename std::stack<T>::container_type).name(),
// 		0, 0, &status
// 	);

// 	std::cout << "Container type: " << (status == 0 ? realname : "Unknown") << std::endl;
// 	std::free(realname);
// }
