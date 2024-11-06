/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:56:56 by dbonilla          #+#    #+#             */
/*   Updated: 2024/11/06 13:38:00 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "iostream"
#include <iomanip>

phonebook::phonebook() :  current_contact_index(0), total_contacts()
{
    
}

void phonebook::add_contact()
{
    contact new_contact;
    std::string input;

    std::cout << "Enter first Name:";
    std::getline(std::cin, input);
    new_contact.setfirstname(input);

    contacts[current_contact_index] = new_contact;
    current_contact_index =  (current_contact_index + 1) % 8;
    if (total_contacts < 8)
        total_contacts++;

 
}

void phonebook::display_contact_details(int index) const
{
    std::cout << "first Name" << contacts[index].getfirstname() << std::endl;
    std::cout << "first Name" << contacts[index].getlastname() << std::endl;
    std::cout << "first Name" << contacts[index].getnickname() << std::endl;
    std::cout << "first Name" << contacts[index].getphonenumber() << std::endl;
    std::cout << "first Name" << contacts[index].getdarkestsecret() << std::endl;
}