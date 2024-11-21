/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 01:07:57 by pipe              #+#    #+#             */
/*   Updated: 2024/11/18 13:30:35 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int main() {
    phonebook phonebook;
    
    std::string command;
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT)" << std::endl;
        std:: getline(std::cin, command);
        
        if (command == "ADD")
            phonebook.add_contact();
        else if (command ==  "SEARCH")
            phonebook.search_contacts();      
        else if (command == "EXIT")
            break;      
        else
            std::cout << "Unknown command." << std::endl;
    }
    return 0;
}


