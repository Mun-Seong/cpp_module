/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:15 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 19:31:21 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *crowd = zombieHorde(5, "zom");
    for (int i=0; i<5; i++)
        crowd[i].announce();
    delete[](crowd);

    Zombie *re = zombieHorde(10, "zombie");
    for (int i=0; i<5; i++)
        re[i].announce();
    delete[](re);
    
    return 0;
}