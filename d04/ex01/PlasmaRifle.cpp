#include <iostream>

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& inst)
{
	*this = inst;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& inst)
{
	if (this != &inst) {
		_name = inst._name;
		_ap_cost = inst._ap_cost;
		_damage = inst._damage;
	}
	return *this;
}
void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
