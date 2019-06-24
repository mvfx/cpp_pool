//
// Created by Maksim KACHANOVSKIY on 2019-06-24.
//

#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
    _name = "Stig";
    _age = 1;
    std::cout << "New pony " << getName() << " suddenly born\n";
}

Pony::Pony(std::string newName, int newAge)
{
    _name = newName;
    _age = newAge;
    std::cout << "New pony " << getName() << " suddenly born\n";
}

Pony::~Pony()
{
    _age = 0;
    std::cout << "My pony " << getName() << " двинул кони =(\n\n";
}

int Pony::getAge() const
{
    return (_age);
}

int Pony::setAge(int n)
{
    _age = n;
    return (_age);
}

std::string Pony::getName() const
{
    return (_name);
}

std::string Pony::setName(std::string newName)
{
    _name = newName;
    return (_name);
}