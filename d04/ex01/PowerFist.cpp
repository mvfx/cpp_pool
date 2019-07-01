#include <iostream>

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist& inst)
{
	*this = inst;
}

PowerFist::~PowerFist()
{
}

PowerFist&	PowerFist::operator=(const PowerFist& inst)
{
	if (this != &inst) {
		_name = inst._name;
		_ap_cost = inst._ap_cost;
		_damage = inst._damage;
	}
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
