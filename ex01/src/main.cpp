/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 01:07:57 by pipe              #+#    #+#             */
/*   Updated: 2024/11/25 18:29:04 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include <cstdio>
#include <cstdlib>
static void	wait()
{
	std::cout << "\n(pulse enter para continuar)\n";
	std::cin.ignore();
}
int main() {
    phonebook phonebook;
    
    std::string command;
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT)" << std::endl;
        std:: getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << "EOF detected" << std::endl;
            exit(1);
        }
        if (command == "ADD")
        {
            phonebook.add_contact();
        }
        else if (command ==  "SEARCH")
            phonebook.search_contacts();      
        else if (command == "EXIT")
            break;      
        else
            std::cout << "Unknown command." << std::endl;
        wait();
        
    }
    return 0;
}


