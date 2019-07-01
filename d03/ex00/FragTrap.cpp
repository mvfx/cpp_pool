/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 12:21:08 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 12:21:13 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
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

FragTrap::~FragTrap()
{
	std::cout << "DESTROYED ["<< _name << "]" << std::endl;
};

FragTrap& FragTrap::operator = (const FragTrap& inst)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP [" << _name << "] attacks [" << target << "] "
		<< "at range, causing [" << _attackDamageRange
		<< "] points of damage !" << std::endl;
};

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP [" << _name << "] attacks [" << target << "] "
			  << "at melee, causing [" << _attackDamageMelee
			  << "] points of damage !" << std::endl;
};


unsigned int	FragTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int	FragTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int	FragTrap::getLevel() const
{
	return _level;
}

unsigned int	FragTrap::getMaxEnergyPoints() const
{
	return _maxEnergyPoints;
}

unsigned int	FragTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

unsigned int	FragTrap::getAttackDamageMelee() const
{
	return _attackDamageMelee;
}

unsigned int	FragTrap::getAttackDamageRange() const
{
	return _attackDamageRange;
}

unsigned int	FragTrap::getDamageArmorReduction() const
{
	return _damageArmorReduction;
}

std::string	FragTrap::getName() const
{
	return _name;
}

void	FragTrap::setName(std::string name)
{
	_name = name;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount >= _maxHitPoints) {
		_hitPoints = _maxHitPoints;
	} else {
		_hitPoints += amount;
	}

	std::cout << "["<< _name << "] repaired HP [" << _hitPoints << "]" << std::endl;
}


void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	std::string act;
	std::string attacks[3] = {
			"RDN ATTACK 1",
			"RDN ATTACK 2",
			"RDN ATTACK 3"
	};
	if (_energyPoints >= 25) {
		_energyPoints -= 25;
		act = attacks[rand() % 3];

		std::cout << "FR4G-TP [" << _name << "] ATTACK::"
				  << act << ", causing [" << (rand() % 50)
				  << "] points of damage to [" << target << "]" << std::endl;
	} else {
		std::cout << "FR4G-TP [" << _name << "] HAS NO ENERGY"  << std::endl;
	}
}