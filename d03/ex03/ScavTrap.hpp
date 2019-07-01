/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 18:49:15 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 18:49:17 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& src);
	ScavTrap(std::string name);

	~ScavTrap();

	void 			rangedAttack(std::string const &target);
	void 			meleeAttack(std::string const &target);

	void 			challengeNewcomer(const std::string &target);
	
private:
	void	_init(std::string name);

};


#endif

