/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:33:07 by museo             #+#    #+#             */
/*   Updated: 2022/11/06 12:20:46 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <string>

int main()
{
	std::vector<int> v(100);
	std::deque<int> q;
	int vpos, qpos;
	
	/** init queue */
	{
		for (int i=0; i<100; i++)
		q.push_front(i);
	}

	v[24] = 42;
	/** Not found Test */
	try {
		vpos = easyfind(v, 40);
		std::cout << v[vpos] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/** Int queue find Test */ 
	try {
		qpos = easyfind(q, 40);
		std::cout << q[qpos] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/** Int vector Found Test */
	try {
		vpos = easyfind(v, 42);
		std::cout << v[vpos] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/** Where First found Test(vector) */
	v[2] = 42;
	try {
		vpos = easyfind(v, 42);
		std::cout << v[vpos] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/** Where First found Test(deque) */
	q.push_front(42);
	try {
		qpos = easyfind(q, 42);
		std::cout << q[qpos] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
