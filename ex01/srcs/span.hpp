/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:11:42 by abakirca          #+#    #+#             */
/*   Updated: 2025/10/20 13:07:56 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

class Span
{
	private:
			std::vector<int>	vec;
			unsigned int		size;
			unsigned int		filled;
	public:
			Span();
			Span(unsigned int n);
			Span(Span const &other);
			Span &operator=(Span const &copy);
			~Span();
			void addNumber(int n);
			void addNumber(const int *arr, unsigned int size);
			unsigned int shortestSpan();
			unsigned int longestSpan();
			void RandomFill(Span &sp, unsigned int n);
			

	class SpanEmpty : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};

	class SpanFull : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
	
	class SpanNotEnoughValues : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};

#endif
