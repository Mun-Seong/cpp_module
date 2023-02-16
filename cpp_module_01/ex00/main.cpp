/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:15:58 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 19:17:33 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1("z1");
    Zombie *z2 = newZombie("new_z2");

    z1.announce();
    std::cout << "Randomchump" << std::endl;
    randomChump("rand_z3");
    std::cout << "delete new_z2" << std::endl;
    delete(z2);
    std::cout << "program exit who last die??" << std::endl;

    return 0;
}