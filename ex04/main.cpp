/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:20:40 by timo              #+#    #+#             */
/*   Updated: 2024/10/02 19:04:02 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main_exec(std::string file, std::string s1, std::string s2)
{
	if (file == "" || s1 == "" || s2 == "")
	{
		std::cout << "empty input" << std::endl;
		return (1);
	}
	Replace Sed;
	return (Sed.replace(file, s1, s2));
}

void	show_result(std::string name)
{
	std::stringstream buffer; 
	std::ifstream	result(name.c_str());
	if (!result || result.bad())
	{
		std::cout << "\e[1;32mno resulting file has been created\e[0m" << std::endl;
		return ;
	}
	buffer << result.rdbuf();
	std::cout << "result is:" << "\e[1;35m" << buffer.str() << "\e[0m" << std::endl;
}

int main(void)
{
	std::string s1 = "hello";
	std::string s2 = "goodbye";
	std::string trash;
	
	std::cout << "creating file \e[1;32mtest1.txt\e[0m with content: \e[1;35m'hello hellohihello'\e[0m" << std::endl;
	std::ofstream test1("test1.txt");
	test1 << "hello hellohihello";
	test1.close();
	
	std::cout << "creating file \e[1;32mtest2\e[0m with content: \e[1;35m'hello hellohihello'\e[0m" << std::endl;
	std::ofstream test2("test2");
	test2 << "hello hellohihello";
	test2.close();
	
	std::cout << "creating file \e[1;32mtest3.txt\e[0m with no content" << std::endl;
	std::ofstream test3("test3.txt");
	std::cout << std::endl << "tests will be executed with \e[1;35ms1 = hello\e[0m and \e[1;35ms2 = goodbye\e[0m" << std::endl;
	test3.close();

	std::cout << std::endl << "executing test on \e[1;32mtest1.txt\e[0m" << std::endl;
	main_exec("test1.txt", s1, s2);
	show_result("test1.replace");
	std::cout << std::endl << "press enter to continue" << std::endl;
	std::getline(std::cin, trash);
	std::cout << "\e[1;33m" << std::string(48, '-') << "\e[0m" << std::endl;
	
	std::cout << std::endl << "executing test on \e[1;32mtest2\e[0m" << std::endl;
	main_exec("test2", s1, s2);
	show_result("test2.replace");
	std::cout << std::endl << "press enter to continue" << std::endl;
	std::getline(std::cin, trash);
	std::cout << "\e[1;33m" << std::string(48, '-') << "\e[0m" << std::endl;

	std::cout << std::endl << "executing test on \e[1;32mtest3.txt\e[0m" << std::endl;
	main_exec("test3.txt", s1, s2);
	show_result("test3.replace");
	std::cout << std::endl << "press enter to continue" << std::endl;
	std::getline(std::cin, trash);
	std::cout << "\e[1;33m" << std::string(48, '-') << "\e[0m" << std::endl;

	std::cout << std::endl << "changing permission for file \e[1;32mtest1.txt\e[0m to -777 and deleting \e[1;32mtest1.replace\e[0m" << std::endl;
	system("chmod -777 test1.txt");
	system("rm test1.replace");
	
	std::cout << std::endl << "executing test on \e[1;32mtest1.txt\e[0m" << std::endl;
	main_exec("test1.txt", s1, s2);
	show_result("test1.replace");
	std::cout << std::endl << "press enter to continue" << std::endl;
	std::getline(std::cin, trash);
	std::cout << "\e[1;33m" << std::string(48, '-') << "\e[0m" << std::endl;

	std::cout << std::endl << "executing test on \e[1;32mtest1.txt\e[0m with two empty strings" << std::endl;
	main_exec("test1.txt", "", "");
	show_result("test1.replace");
	std::cout << std::endl << "press enter to continue" << std::endl;
	std::getline(std::cin, trash);
	std::cout << "\e[1;33m" << std::string(48, '-') << "\e[0m" << std::endl;

	std::cout << std::endl << "removing all files and ending tests" << std::endl;
	system("chmod 777 test1.txt");
	system("rm *.txt");
	system("rm *replace");
	system("rm test2");
}