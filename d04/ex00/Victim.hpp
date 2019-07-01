#include <iostream>

#ifndef VICTIM_H
#define VICTIM_H

class Victim
{
public:
	Victim(std::string name);
	~Victim();
	Victim(const Victim& inst);

	Victim& operator = (const Victim& inst);


	std::string getName() const;
	void getPolymorphed() const;

protected:
	Victim();

	std::string _name;

};

std::ostream& operator << (std::ostream& output, const Victim& inst);


#endif