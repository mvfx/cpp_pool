/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:55:06 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:55:09 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Zombie.hpp"

//Zombie::Zombie() : _type("NO_TYPE"), _name("NO_NAME")
//{
//    std::cout << "[BORN] NO NAME Zombie" << std::endl;
//}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
    std::cout << "[BORN] Zombie " << "<" << _name << " (" << _type << ")>"
        << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "[DIE] Zombie " << "<" << _name << " (" << _type << ")>"
              << std::endl;
}

std::string	Zombie::type(void) const
{
    return _type;
}

std::string	Zombie::name(void) const
{
    return _name;
}

void		Zombie::setType(std::string type)
{
    _type = type;
}


void		Zombie::setName(std::string name)
{
    _name = name;
}

void	Zombie::announce(void)
{
    std::cout << "<" << _name << " (" << _type << ")>"
              << " Braiiiiiiinnnssss..." << std::endl;
}