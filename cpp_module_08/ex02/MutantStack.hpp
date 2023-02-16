/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:55:33 by museo             #+#    #+#             */
/*   Updated: 2022/11/05 00:12:31 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>
# include <stdexcept>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;
	MutantStack() : std::stack<T>() { }
	MutantStack(size_t size) : std::stack<T>() {
		for (size_t i=0; i<size; i++)
			this->c.push_back(T());	
	}
	MutantStack(const MutantStack &copy) {
		*this = copy;
	}
	MutantStack &operator=(const MutantStack &copy) {
		if (this != &copy)
			this->c = copy.c;
		return *this;
	}
	~MutantStack() { }
	
	const T &top() const {
		return (this->c.back());
	}
	bool empty() const {
		return (this->c.empty());
	}
	size_t size() {
		return (this->c.size());
	}
	void push(T t) {
		this->c.push_back(t);
	}
	void pop() {
		this->c.pop_back();
	}

	iterator begin() {
		return (iterator(this->c.begin()));
	}
	iterator end() {
		return (iterator(this->c.end()));
	}
};

#endif
