/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:20 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:20:12 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl k = Harl();

    k.complain("DEBUG");
    k.complain("BUG");
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("ERROR");

    return (0);
}