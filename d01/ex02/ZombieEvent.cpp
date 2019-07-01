/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:55:42 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:55:51 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#include <string>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent()
{
    srand(time(NULL));
}

ZombieEvent::ZombieEvent(std::string type) : _zomb_type(type)
{
    srand(time(NULL));
}

ZombieEvent::~ZombieEvent()
{

}

std::string	ZombieEvent::_getRandomName()
{
    int nameLength = 10;
    std::string	randomName;

    return _getRandomNameRec(randomName, nameLength);
}

std::string	ZombieEvent::_getRandomNameRec(std::string randomName, int nameLength)
{
    static char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

    if (!nameLength)
    {
        return randomName;
    }
    randomName += charset[rand() % sizeof(charset)];
    return _getRandomNameRec(randomName, nameLength - 1);
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, _zomb_type);
}

Zombie	ZombieEvent::randomChump()
{
    Zombie chump(_getRandomName(), _zomb_type);

    chump.announce();
    return chump;
}

void	ZombieEvent::setZombieType(std::string type)
{
    _zomb_type = type;
}
