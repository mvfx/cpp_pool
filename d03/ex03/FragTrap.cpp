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

FragTrap::FragTrap()
{
	_init("ANONYMOUS FRAG");
}

FragTrap::FragTrap(std::string name)
{
	_init(name);
}

void FragTrap::_init(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_attackDamageMelee = 30;
	_attackDamageRange = 20;
	_damageArmorReduction = 5;
	std::cout <<  "CREATED FR4G-TP ["<< _name << "]" << std::endl;
};

FragTrap::~FragTrap()
{
	std::cout << "DESTROYED FR4G-TP ["<< _name << "]" << std::endl;
};

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