/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:56:56 by dbonilla          #+#    #+#             */
/*   Updated: 2024/11/18 18:05:17 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "iostream"
#include <iomanip>

phonebook::phonebook() :  current_contact_index(0), total_contacts(0)
{
    
}


bool isvalidphonenumber(const std::string &number)
{
    for (size_t i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
            return false;
    }
    return true;
}
void phonebook::add_contact()
{
    contact new_contact;
    std::string input;

    std::cout << "Enter first Name:";
    std::getline(std::cin, input);
    new_contact.setfirstname(input);

    std::cout << "Enter Last Name:";
    std::getline(std::cin, input);
    new_contact.setlastname(input);


    std::cout << "Enter Nickname:";
    std::getline(std::cin, input);
    new_contact.setnickname(input);
    
    std::cout << "Enter Phone number:";
    std::getline(std::cin, input);
    while (input.length() != 9 || !isvalidphonenumber(input)) 
    {
        std::cout << "Please enter a valid phone number with exactly nine digits." << std::endl;
        std::cout << "Enter Phone number:";
        std::getline(std::cin, input);
    }    


    std::cout << "Darkest secret:";
    std::getline(std::cin, input);
    new_contact.setdarkestsecret(input);

    contacts[current_contact_index] = new_contact;
    current_contact_index =  (current_contact_index + 1) % 8;
    if (total_contacts < 8)
        total_contacts++;

 
}

void phonebook::display_contact_summary() const
{
    std::cout   << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name " << "|"
                << std::setw(10) << "Phone Number" << "|"
 				<< std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i  = 0; i  < total_contacts; ++i)
	{
		std::cout   << std::setw(10) << (i) << "|"
					<< std::setw(10) << (contacts[i].getfirstname().length() > 10 ? contacts[i].getfirstname().substr(0, 9) + "." : contacts[i].getfirstname()) << "|"
					<< std::setw(10) << (contacts[i].getlastname().length() > 10 ? contacts[i].getlastname().substr(0, 9) + "." : contacts[i].getlastname()) << "|"
					<< std::setw(10) << (contacts[i].getphonenumber().length() > 10 ? contacts[i].getphonenumber().substr(0, 9) + "." : contacts[i].getphonenumber()) << "|"
					<< std::setw(10) << (contacts[i].getnickname().length() > 10 ? contacts[i].getnickname().substr(0, 9) + "." : contacts[i].getnickname()) << std::endl;

	}
}
void phonebook::search_contacts()const
{
    display_contact_summary();
    std::cout << "Enter index of contact to display:"<< std::endl;
    
    int index;
    std::cin >> index;
 
    if (index < 0 || index >= total_contacts)
        std::cout << "Invalid index" << std::endl;
    else
        display_contact_details(index);
}

void phonebook::display_contact_details(int index) const
{
    std::cout << "First Name" << contacts[index].getfirstname() << std::endl;
    std::cout << "Last Name" << contacts[index].getlastname() << std::endl;
    std::cout << "Nickname" << contacts[index].getnickname() << std::endl;
    std::cout << "Phone number" << contacts[index].getphonenumber() << std::endl;
    std::cout << "Darkest secret" << contacts[index].getdarkestsecret() << std::endl;
}