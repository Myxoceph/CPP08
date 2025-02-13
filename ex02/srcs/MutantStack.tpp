/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:07 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 18:42:26 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	std::stack<T, std::vector<int> >();
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
