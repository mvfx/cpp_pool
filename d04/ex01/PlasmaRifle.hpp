#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& inst);
	~PlasmaRifle();

	PlasmaRifle&	operator=(const PlasmaRifle& inst);

	virtual void	attack() const;
};

#endif
