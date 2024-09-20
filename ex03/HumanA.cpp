/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:15:21 by timo              #+#    #+#             */
/*   Updated: 2024/09/13 18:08:59 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& w) : name(name), weapon(w)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	//std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	this->weapon.getType();
}