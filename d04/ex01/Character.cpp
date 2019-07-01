//
// Created by Maksim KACHANOVSKIY on 2019-06-29.
//

#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"

Character::Character()
{
}

Character::Character(const std::string& name) : _ap(40), _name(name),
												_weapon(NULL)
{
}

Character::Character(const Character& inst)
{
	*this = inst;
}

Character::~Character()
{
}

Character& Character::operator=(const Character& inst)
{
	if (this != &inst) {
		_ap = inst._ap;
		_name = inst._name;
		_weapon = inst._weapon;
	}
	return *this;
}

void	Character::recoverAP()
{
	if (_ap + 10 >= 40) {
		_ap = 40;
	} else {
		_ap += 10;
	}
}

void	Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	int	ap_cost;

	if (_weapon && enemy) {
		ap_cost = _weapon->getAPCost();
		if (_ap - ap_cost >= 0) {
			std::cout << _name << " attacks " << enemy->getType()
					  << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			if (enemy->getHP() <= 0) {
				delete enemy;
			}
			_ap -= ap_cost;
		}
	}
}

const std::string	Character::getName() const
{
	return _name;
}

int	Character::getAp() const
{
	return _ap;
}

AWeapon*	Character::getWeapon() const
{
	return _weapon;
}

std::ostream&	operator<<(std::ostream& o, const Character& inst)
{
	if (inst.getWeapon()) {
		o << inst.getName() << " has " << inst.getAp()
		  << " AP and wields a " << inst.getWeapon()->getName() << std::endl;
	} else {
		o << inst.getName() << " has " << inst.getAp()
		  << " AP and is unarmed" << std::endl;
	}
	return o;
}
