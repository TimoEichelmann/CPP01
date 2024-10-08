/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:25:13 by timo              #+#    #+#             */
/*   Updated: 2024/09/13 14:00:19 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string starttype) : type(starttype)
{
	std::cout << "weapon created" << std::endl;
}

std::string const &	Weapon::getType(void) const
{
	std::cout << this->type << std::endl;
	return (this->type);
}

void		Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::~Weapon(void)
{
	std::cout << "weapon destroyed" << std::endl;
}