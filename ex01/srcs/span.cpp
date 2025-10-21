/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:11:31 by abakirca          #+#    #+#             */
/*   Updated: 2025/10/21 13:06:48 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	size = 0;
	filled = 0;
}

Span::Span(unsigned int n)
{
	size = n;
	filled = 0;
}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		size = copy.size;
		vec = copy.vec;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (size == 0)
		throw SpanEmpty();
	if (filled >= size)
		throw SpanFull();
	vec.push_back(n);
	filled++;
}

void Span::addNumber(const int *arr, unsigned int arr_size)
{
	if (size == 0)
		throw SpanEmpty();
	if (filled + arr_size > size)
		throw SpanFull();
	vec.insert(vec.end(), arr, arr + arr_size);
	filled += arr_size;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	unsigned int arr_size = std::distance(begin, end);
	if (size == 0)
		throw SpanEmpty();
	if (filled + arr_size > size)
		throw SpanFull();
	vec.insert(vec.end(), begin, end);
	filled += arr_size;
}

unsigned int Span::shortestSpan()
{
	if (size == 0)
		throw SpanEmpty();
	if (filled < 2)
		throw SpanNotEnoughValues();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int> diff(tmp.size());
	std::adjacent_difference(tmp.begin(), tmp.end(), diff.begin());
	return (*std::min_element(diff.begin() + 1, diff.end()));
}

unsigned int Span::longestSpan()
{
	if (size == 0)
		throw SpanEmpty();
	if (filled < 2)
		throw SpanNotEnoughValues();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

void Span::RandomFill(Span &sp, unsigned int n)
{
	if (sp.size == 0)
		throw SpanEmpty();
	if (n > sp.size - sp.filled)
		throw SpanFull();
	srand(time(NULL));
	for (unsigned int i = 0; i < n; i++)
	{
		sp.addNumber(rand() % 100000);
	}
}

const char *Span::SpanEmpty::what() const throw()
{
	return ("Vector is empty!");
}

const char *Span::SpanFull::what() const throw()
{
	return ("Vector is full!");
}

const char *Span::SpanNotEnoughValues::what() const throw()
{
	return ("Not enough values to find a span!");
}
