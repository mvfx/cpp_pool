#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"


Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title
		<< ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& inst)
{
	*this = inst;
}

Sorcerer& Sorcerer::operator = (const Sorcerer& inst)
{
	if (this != &inst) {
		_name = inst.getName();
		_title = inst.getTitle();
	}
	return *this;
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

void Sorcerer::polymorph(const Victim& victimInst) const
{
	victimInst.getPolymorphed();
}


std::ostream& operator << (std::ostream &output, const Sorcerer& inst)
{
	output << "I am " << inst.getName() << ", " << inst.getTitle()
		<< ", and I like ponies !" << std::endl;
	return output;
}