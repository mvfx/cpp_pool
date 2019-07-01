/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:48:48 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 19:48:52 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_attackDamageMelee = 30;
	_attackDamageRange = 20;
	_damageArmorReduction = 5;
	std::cout <<  "CREATED ["<< _name << "]" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "DESTROYED ["<< _name << "]" << std::endl;
};

ClapTrap& ClapTrap::operator = (const ClapTrap& inst)
{
	if (this != &inst) {
		_hitPoints = inst.getHitPoints();
		_maxHitPoints = inst.getMaxHitPoints();
		_energyPoints = inst.getEnergyPoints();
		_maxEnergyPoints = inst.getMaxEnergyPoints();
		_level = inst.getLevel();
		_attackDamageMelee = inst.getAttackDamageMelee();
		_attackDamageRange = inst.getAttackDamageRange();
		_damageArmorReduction = inst.getDamageArmorReduction();
		_name = inst.getName();
	}
	return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "[" << _name << "] attacks [" << target << "] "
			  << "at range, causing [" << _attackDamageRange
			  << "] points of damage !" << std::endl;
};

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "[" << _name << "] attacks [" << target << "] "
			  << "at melee, causing [" << _attackDamageMelee
			  << "] points of damage !" << std::endl;
};


unsigned int	ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int	ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int	ClapTrap::getLevel() const
{
	return _level;
}

unsigned int	ClapTrap::getMaxEnergyPoints() const
{
	return _maxEnergyPoints;
}

unsigned int	ClapTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

unsigned int	ClapTrap::getAttackDamageMelee() const
{
	return _attackDamageMelee;
}

unsigned int	ClapTrap::getAttackDamageRange() const
{
	return _attackDamageRange;
}

unsigned int	ClapTrap::getDamageArmorReduction() const
{
	return _damageArmorReduction;
}

std::string	ClapTrap::getName() const
{
	return _name;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount >= _maxHitPoints) {
		_hitPoints = _maxHitPoints;
	} else {
		_hitPoints += amount;
	}

	std::cout << "["<< _name << "] repaired HP [" << _hitPoints << "]" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= _damageArmorReduction) {
		std::cout << "[" << _name << "] protected by armor "<< std::endl;
	} else {
		amount -= _damageArmorReduction;
		if (amount >= _hitPoints) {
			amount = _hitPoints;
			_hitPoints = 0;
		} else {
			_hitPoints -= amount;
		}

		std::cout << "[" << _name << "] takes " << amount << " damage points"
				  << std::endl;
	}
}