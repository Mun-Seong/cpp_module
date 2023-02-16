/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:55:18 by museo             #+#    #+#             */
/*   Updated: 2022/11/06 12:25:46 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::Span() : max_size(0) {
	v = std::vector<int>();
}
Span::Span(unsigned int max_size) : max_size(max_size) {
	v = std::vector<int>();
}
Span::Span(const Span &copy) : max_size(copy.max_size) {
	*this = copy;
}
Span::~Span() {
	v.erase(v.begin(), v.end());
}

Span &Span::operator=(const Span &copy) {
	if (this != &copy)
	{
		this->~Span();
		new (this) Span(copy.max_size);
		this->v = copy.v;
	}	
	return *this;
}

unsigned int Span::maxSize() const { return max_size; }

void Span::addNumber(int n)
{
	if (v.size() == max_size)
		throw Span::MaxSpanException();
	else
		v.insert(std::upper_bound(v.begin(), v.end(), n), n);
}

void Span::addAllNumber() {
	srand(clock());
	int r;
	for (unsigned int i=0; i<max_size; i++)
	{
		r = rand();
		addNumber(r);
	}
}

unsigned int Span::shortestSpan()
{
	if (v.size() > 1)
	{
		unsigned int shortest = std::numeric_limits<unsigned int>::max();
		iter it, now_it, pre_it;
		for (it = this->begin() + 1; it < v.end(); it++)
		{
			if (static_cast<unsigned int>(*it - *(it - 1)) < shortest)
			{
				now_it = it;
				pre_it = it -1;
				shortest = std::abs(*it - *pre_it);
			}
		}
		std::cout << "Shortest span is between "<< (pre_it - v.begin() + 1) << "th \"" << *pre_it
			<< "\" and " << (now_it - v.begin() + 1) << "th \"" << *now_it << "\"" << std::endl;
		return (shortest);
	}
	else
		throw Span::NonSpanException();
}

unsigned int Span::longestSpan()
{
	if (v.size() > 1)
	{
		std::cout << "Shortest span is between First \"" << *v.begin()
			<< "\" and " << "Last \"" << *(v.end() - 1) << "\"" << std::endl;
		return ( *(v.end() - 1) - *v.begin());
	}
	else
		throw Span::NonSpanException();
}

iter Span::begin(void) {
	return (v.begin());
}

iter Span::end(void) {
	return (v.end());
}

const char *Span::NonSpanException::what() const throw() {
	return "not enough elements to check span";
}
const char *Span::MaxSpanException::what() const throw() {
	return "Max capacity reached";
}

std::ostream &operator<<(std::ostream &out, const Span &span) {
	iter s = const_cast<Span&>(span).begin();
	iter e = const_cast<Span&>(span).end();
	iter it;

	for (it = s; it<e; it++)
	{
		out << "v[" << it - s << "] : " << *it << " ";
		if (((it - s + 1) % 10) == 0)
			out << std::endl;
	}
	out << std::endl;
	return (out);
}


