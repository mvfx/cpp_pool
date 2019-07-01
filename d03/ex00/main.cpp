/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 12:21:43 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 12:21:48 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	foo("ROBO 1");

	foo.takeDamage(10);
	foo.takeDamage(5);
	foo.takeDamage(10);
	foo.beRepaired(20);

	foo.rangedAttack("ROBO 2");
	foo.meleeAttack("ROBO 2");
	foo.vaulthunter_dot_exe("ROBO 3");
	foo.vaulthunter_dot_exe("ROBO 4");
	foo.vaulthunter_dot_exe("ROBO 3");
	foo.vaulthunter_dot_exe("ROBO 4");
	foo.vaulthunter_dot_exe("ROBO 5");
	return 0;
}