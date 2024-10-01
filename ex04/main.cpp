/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:20:40 by timo              #+#    #+#             */
/*   Updated: 2024/10/01 16:53:06 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "invalid input" << std::endl;
		return (-1);
	}
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];
	std::string 	read;
	std::ifstream	in(argv[1]);
	int				index;
	if (!in || in.bad())
	{
		std::cout << "bad file input" << std::endl;
		return (-1);
	}
	read = in.rdbuf;
	in.close();
}