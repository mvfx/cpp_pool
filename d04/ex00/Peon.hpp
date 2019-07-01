#include <iostream>
#include "Victim.hpp"

#ifndef PEON_H
#define PEON_H

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(const Peon& inst);
	~Peon();

	Peon& operator = (const Peon& inst);

	void getPolymorphed() const;

private:
	Peon();
};

#endif