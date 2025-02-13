/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:11:31 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 17:47:46 by abakirca         ###   ########.fr       */
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
	if (vec.size() == size)
		throw SpanFull();
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
	std::cout << n;
	if (size == 0)
		throw SpanEmpty();
	if (filled >= size)
		throw SpanFull();
	vec.push_back(n);
	filled++;
}

unsigned int Span::shortestSpan()
{
	if (size == 0)
		throw SpanEmpty();
	if (filled < 2)
		throw SpanNotEnoughValues();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int> diff(vec.size() - 1);
	std::adjacent_difference(tmp.begin(), tmp.end(), diff.begin());
	return (*std::min_element(diff.begin(), diff.end()));
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
	srand(time(NULL));
	for (unsigned int i = 0; i < n; i++)
	{
		sp.addNumber(rand() % 100000);
	}
}

const char *Span::SpanEmpty::what() const throw()
{
	return ("Span is empty!");
}

const char *Span::SpanFull::what() const throw()
{
	return ("Span is full!");
}

const char *Span::SpanNotEnoughValues::what() const throw()
{
	return ("Not enough values to find a span!");
}
