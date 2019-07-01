/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:56:17 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:56:20 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	createZombieRandomRec(ZombieEvent& factory, int n)
{
    if (!n)
        return ;
    Zombie tmp = factory.randomChump();
    return createZombieRandomRec(factory, n - 1);
}

void	randomArmy(ZombieEvent& factory)
{
    return createZombieRandomRec(factory, 12);
}

int	main()
{
    ZombieEvent	factory;
    Zombie*		lol;
    Zombie*		yo;

    factory.setZombieType("TYPE_1");
    lol = factory.newZombie("NAME_1");
    randomArmy(factory);
    factory.setZombieType("TYPE_2");
    yo = factory.newZombie("NAME_2");
    lol->announce();
    delete lol;
    delete yo;
    return 0;
}
