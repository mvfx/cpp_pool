//
// Created by Maksim KACHANOVSKIY on 2019-06-29.
//

#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>

class AWeapon
{
public:
	AWeapon(const std::string& name, int apcost, int damage);
	AWeapon(const AWeapon& inst);
	virtual ~AWeapon();

	AWeapon&	operator=(const AWeapon& inst);

	virtual void	attack() const = 0;

	int					getAPCost() const;
	int					getDamage() const;
	const std::string	getName() const;

protected:
	AWeapon();

	int			_damage,
			_ap_cost;
	std::string	_name;
};

#endif
