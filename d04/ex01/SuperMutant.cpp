#include <iostream>

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& inst)
{
	*this = inst;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." <<std::endl;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& inst)
{
	if (this != &inst) {
		_hp = inst._hp;
		_type = inst._type;
	}
	return *this;
}
void	SuperMutant::takeDamage(int n)
{
	n -= 3;

	if (n < 0) {
		return ;
	} else if (_hp - n <= 0) {
		_hp = 0;
	} else {
		_hp -= n;
	}
}
