/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:58:33 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:58:36 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *myPony = new Pony("NAME_1", 10);
    myPony->sayHello();
    delete myPony;
}

void ponyOnTheStack()
{
    Pony myPony("NAME_2", 20);
    myPony.sayHello();
}

int		main( void )
{
    ponyOnTheHeap();

    ponyOnTheStack();

    return 0;
}
