/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 18:49:02 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 18:49:06 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_attackDamageMelee = 20;
	_attackDamageRange = 15;
	_damageArmorReduction = 3;
	std::cout <<  "CREATED SC4V-TP ["<< _name << "]" << std::endl;
};

ScavTrap::~ScavTrap()
{
	std::cout << "DESTROYED SC4V-TP ["<< _name << "]" << std::endl;
};

ScavTrap& ScavTrap::operator = (const ScavTrap& inst)
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP [" << _name << "] attacks [" << target << "] "
			  << "at range, causing [" << _attackDamageRange
			  << "] points of damage !" << std::endl;
};

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP [" << _name << "] attacks [" << target << "] "
			  << "at melee, causing [" << _attackDamageMelee
			  << "] points of damage !" << std::endl;
};


unsigned int	ScavTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int	ScavTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int	ScavTrap::getLevel() const
{
	return _level;
}

unsigned int	ScavTrap::getMaxEnergyPoints() const
{
	return _maxEnergyPoints;
}

unsigned int	ScavTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

unsigned int	ScavTrap::getAttackDamageMelee() const
{
	return _attackDamageMelee;
}

unsigned int	ScavTrap::getAttackDamageRange() const
{
	return _attackDamageRange;
}

unsigned int	ScavTrap::getDamageArmorReduction() const
{
	return _damageArmorReduction;
}

std::string	ScavTrap::getName() const
{
	return _name;
}

void	ScavTrap::setName(std::string name)
{
	_name = name;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount >= _maxHitPoints) {
		_hitPoints = _maxHitPoints;
	} else {
		_hitPoints += amount;
	}

	std::cout << "SC4V-TP ["<< _name << "] repaired HP [" << _hitPoints << "]" << std::endl;
}


void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= _damageArmorReduction) {
		std::cout << "SC4V-TP [" << _name << "] protected by armor "<< std::endl;
	} else {
		amount -= _damageArmorReduction;
		if (amount >= _hitPoints) {
			amount = _hitPoints;
			_hitPoints = 0;
		} else {
			_hitPoints -= amount;
		}

		std::cout << "SC4V-TP [" << _name << "] takes " << amount << " damage points"
				  << std::endl;
	}
}

void	ScavTrap::challengeNewcomer(const std::string& target)
{
	std::string act;
	std::string attacks[3] = {
			"RDN CHALLENGE 1",
			"RDN CHALLENGE 2",
			"RDN CHALLENGE 3"
	};
	if (_energyPoints >= 25) {
		_energyPoints -= 25;
		act = attacks[rand() % 3];

		std::cout << "SC4V-TP [" << _name << "] does "
				  << act << "to " << target << std::endl;
	} else {
		std::cout << "SC4V-TP [" << _name << "] HAS NO ENERGY"  << std::endl;
	}
}