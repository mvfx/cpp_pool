//
// Created by Maksim KACHANOVSKIY on 2019-06-24.
//

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
