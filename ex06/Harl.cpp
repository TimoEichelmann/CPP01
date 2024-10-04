/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:02:44 by timo              #+#    #+#             */
/*   Updated: 2024/10/04 12:49:19 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

void Harl::complain( std::string level )
{
	void	(Harl::*complain_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	for(i = 0; level != complains[i] && i < 4; i++);
	switch(i)
	{
		case 0:
			(this->*complain_ptr[0])();
			/* fallthrough */
		case 1:
			(this->*complain_ptr[1])();
			/* fallthrough */
		case 2:
			(this->*complain_ptr[2])();
			/* fallthrough */
		case 3:
			(this->*complain_ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void )
{
	std::cout << "Harl complains on: \e[32mdebug level\e[0m" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "Harl complains on: \e[33minfo level\e[0m" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "Harl complains on: \e[35mwarning level\e[0m" << std::endl;
}	

void	Harl::error( void )
{
	std::cout << "Harl complains on: \e[31merror level\e[0m" << std::endl;
}	

Harl::~Harl()
{}