#include <iostream>
#include "Victim.hpp"

#ifndef SORCERER_H
#define SORCERER_H

class Sorcerer {

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer& inst);
	~Sorcerer();

	Sorcerer& operator = (const Sorcerer& inst);

	std::string	getName() const;
	std::string getTitle() const;

	void polymorph(const Victim& victimInst) const;

private:
	std::string _name;
	std::string _title;
};

std::ostream& operator << (std::ostream &output, const Sorcerer& inst);

#endif