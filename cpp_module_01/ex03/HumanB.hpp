/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:46 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:14:48 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
    Weapon *wp;
    std::string name;
    HumanB();
public:
    HumanB(const std::string &name);
    HumanB(const std::string &name, Weapon &wp);
    ~HumanB();
    void setWeapon(Weapon &wp);
    void attack();
};

#endif