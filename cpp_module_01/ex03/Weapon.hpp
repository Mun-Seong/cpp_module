/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:56 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:16:06 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
    std::string type;
    Weapon();
public:
    Weapon(const std::string &type);
    ~Weapon();
    std::string getType() const;
    void setType(const std::string &type);
};

#endif