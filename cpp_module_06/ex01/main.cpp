/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:15:52 by museo             #+#    #+#             */
/*   Updated: 2022/11/05 13:25:26 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>
#include <string>
#include <cstdlib>


struct Data
{
    std::string name;
};

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data *a1 = new Data;
    Data *a2 = new Data;
	Data *temp;
    uintptr_t ptr;

    a1->name = "first name for a1";
    a2->name = "second name for a2";
    std::cout << "	a1's name : " << a1->name << "	a2's name : " << a2->name << std::endl;
    ptr = serialize(a1);
    std::cout << "	a1's serialize : " << ptr << std::endl;
    std::cout << "	a1's address : " << a1 << "	a2's address : " << a2 << std::endl;
	temp = a2;
    a2 = deserialize(ptr);	// critical error
    std::cout << "	a1's name : " << a1->name << "	a2's name : " << a2->name << std::endl;

	delete(a1);
	delete(temp);

	system("leaks serialize");
}
