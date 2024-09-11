/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:25:13 by timo              #+#    #+#             */
/*   Updated: 2024/09/11 14:30:37 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{}

Weapon::~Weapon(void)
{}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void		Weapon::setType(std::string new_type)
{
	this->type = new_type;
}