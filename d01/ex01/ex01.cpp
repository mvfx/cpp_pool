/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:57:27 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:57:32 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}
