/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:42 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:08:35 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
    Weapon *wp;
    std::string name;
    HumanA();
public:
    HumanA(const std::string &name, Weapon &wp);
    ~HumanA();
    void attack();
};

#endif