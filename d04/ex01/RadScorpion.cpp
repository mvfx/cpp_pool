#include <iostream>

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& inst)
{
	*this = inst;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& inst)
{
	if (this != &inst) {
		_hp = inst._hp;
		_type = inst._type;
	}
	return *this;
}
