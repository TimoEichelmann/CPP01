/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:22:25 by timo              #+#    #+#             */
/*   Updated: 2024/10/04 12:48:48 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl test;
	
	test.complain("DEBUG");
	std::cout << std::endl;
	test.complain("INFO");
	std::cout << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;
	test.complain("NONE");
}