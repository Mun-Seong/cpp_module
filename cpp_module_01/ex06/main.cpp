/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:36 by museo             #+#    #+#             */
/*   Updated: 2022/10/19 00:17:37 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Argument Error ;(" << std::endl;
        return (1);
    }
    Harl k = Harl();

    std::string comp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string *pos = find(comp, comp + 4, argv[1]); 
    k.complain(comp[pos-comp]);
    return (0);
}