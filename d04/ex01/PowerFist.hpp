#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist& inst);
	~PowerFist();

	PowerFist&	operator=(const PowerFist& inst);

	virtual void	attack() const;
};

#endif

