#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant& inst);
	~SuperMutant();

	SuperMutant& operator=(const SuperMutant& inst);

	virtual void	takeDamage(int n);

};

#endif