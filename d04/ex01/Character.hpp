//
// Created by Maksim KACHANOVSKIY on 2019-06-29.
//

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(const std::string& name);
	Character(const Character& inst);
	~Character();

	Character&	operator=(const Character& inst);

	void				recoverAP();
	void				equip(AWeapon* weapon);
	void				attack(Enemy* enemy);
	const std::string	getName() const;
	int					getAp() const;
	AWeapon*			getWeapon() const;

private:
	Character();

	int			_ap;
	std::string	_name;
	AWeapon*	_weapon;
};

std::ostream&	operator<<(std::ostream& o, const Character& inst);

#endif
