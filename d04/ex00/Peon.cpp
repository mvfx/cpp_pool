#include <iostream>
#include "Peon.hpp"


Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& inst)
{
	*this = inst;
}

Peon::Peon()
{
}


Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator = (const Peon& inst)
{
	if (this != &inst) {
		_name = inst.getName();
	}
	return *this;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}