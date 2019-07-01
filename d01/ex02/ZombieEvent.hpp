/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:56:02 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:56:04 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>

#include "Zombie.hpp"

class ZombieEvent
{
public:
    ZombieEvent();
    ZombieEvent(std::string type);
    ~ZombieEvent();
    void	setZombieType(std::string type);
    Zombie*	newZombie(std::string name);
    Zombie	randomChump();

private:
    std::string	_getRandomName();
    std::string	_getRandomNameRec(std::string randomName, int nameLength);

    std::string	_zomb_type;
};

#endif // ZOMBIEEVENT_HPP
