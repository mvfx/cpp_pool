#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(const std::string& name, int apcost, int damage) :
		_damage(damage), _ap_cost(apcost), _name(name)
{
}

AWeapon::AWeapon(const AWeapon& inst)
{
	*this = inst;
}

AWeapon::~AWeapon()
{
}

AWeapon&	AWeapon::operator=(const AWeapon& inst)
{
	if (this != &inst) {
		_damage = inst._damage;
		_ap_cost = inst._ap_cost;
		_name = inst._name;
	}
	return *this;
}

int	AWeapon::getAPCost() const
{
	return _ap_cost;
}

int	AWeapon::getDamage() const
{
	return _damage;
}

const std::string	AWeapon::getName() const
{
	return _name;
}
