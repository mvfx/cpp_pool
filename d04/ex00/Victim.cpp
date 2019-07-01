#include <iostream>

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name
		<< " just popped !" << std::endl;
}

Victim::Victim(const Victim& inst)
{
	*this = inst;
}

Victim& Victim::operator = (const Victim& inst)
{
	if (this != &inst) {
		_name = inst.getName();
	}
	return *this;
}

Victim::Victim()
{
}

Victim::~Victim()
{
	std::cout << "Victim " << _name
		<< " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const
{
	return _name;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream& operator << (std::ostream& output, const Victim& inst)
{
	output << "I'm " << inst.getName() << " and I like otters !" << std::endl;
	return output;
}