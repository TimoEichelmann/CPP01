/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:41:39 by timo              #+#    #+#             */
/*   Updated: 2024/09/11 13:49:59 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string		&strREF = str;

	std::cout << &str << '\n' << strPTR << '\n' << &strREF << "\n\n" <<
		str << '\n' << *strPTR << '\n' << strREF << std::endl;
}