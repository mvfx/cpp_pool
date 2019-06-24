#include <iostream>
#include "Pony.hpp"


Pony::Pony(std::string name, int weight)
{
    _name = name;
    _weight = weight;
    std::cout << "Pony " << getName() << " born with "
        << getWeight() << " weight\n";
}

Pony::~Pony()
{
    std::cout << "Pony " << getName() << " died\n\n";
}

std::string Pony::getName() const
{
    return (_name);
}

std::string Pony::setName(std::string name)
{
    _name = name;
    return (_name);
}

int Pony::getWeight() const
{
    return (_weight);
}

int Pony::setWeight(int weight)
{
    _weight = weight;
    return (_weight);
}

void	Pony::sayHello(void) const
{
    std::cout << "PONY \nname:\t" << _name
              << "\nweight:\t" << _weight << "\n";
}