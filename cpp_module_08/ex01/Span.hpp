/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:48:11 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 23:50:45 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAWN_HPP
#define SPAWN_HPP

# include <iostream>
# include <algorithm>
# include <cmath>
# include <ctime>
# include <limits>
# include <string>
# include <vector>
# include <iterator>

typedef std::vector<int>::iterator iter;

class Span
{
private:
	std::vector<int> v;
	const unsigned int max_size;
public:
	Span();
	Span(unsigned int max_size);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();

	unsigned int maxSize() const;
	
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

	iter begin(void);
	iter end(void);

	void addNumber(int n);
	void addAllNumber();

	class NonSpanException : public std::exception {
		virtual const char *what() const throw();
	};

	class MaxSpanException : public std::exception {
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Span &s);

#endif
