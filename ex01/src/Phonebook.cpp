/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:56:56 by dbonilla          #+#    #+#             */
/*   Updated: 2024/11/28 11:48:11 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "iostream"
#include <iomanip>
#include <cstdio>
#include <cstdlib>


phonebook::phonebook() :  current_contact_index(0), total_contacts(0)
{
    
}

std::string getvalidinput(const std::string &prompt)
{
	std::string input;

	while(true)
	{
		std::cout << prompt << std::endl;
		
		if (std::getline(std::cin, input).eof())
        {
            std::cin.clear();
            clearerr(stdin);
                std::cout << "EOF detected" << std::endl;
            exit(1);       
        }
		if (input.find('\033') !=  std::string::npos)
		{
			std::cout << "Invalid input" << std::endl;
			continue;
		}
		if (input.empty())
		{
			std::cout << "Input cannot be empty" << std::endl;
			continue;
		}
		break;
	}
	return input;
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

    input = getvalidinput("Enter first Name:");
    new_contact.setfirstname(input);

    input = getvalidinput("Enter last Name:");
    new_contact.setlastname(input);

    input = getvalidinput("Enter Nickname:");
    new_contact.setnickname(input);
    
    std::cout << "Enter Phone number:";
    std::getline(std::cin, input);
    while (input.length() != 9 || !isvalidphonenumber(input)) 
    {
        std::cout << "Please enter a valid phone number with exactly nine digits." << std::endl;
        input = getvalidinput("Enter Phone number:");
    }
	new_contact.setphonenumber(input);

    input = getvalidinput("Enter Darkest secret:");
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
					<< std::setw(10) << (contacts[i].getphonenumber().length() > 10 ? contacts[i].getphonenumber().substr(0, 9) + "." : contacts[i].getphonenumber()) << "  |"
					<< std::setw(10) << (contacts[i].getnickname().length() > 10 ? contacts[i].getnickname().substr(0, 9) + "." : contacts[i].getnickname()) << "|" << std::endl;

	}
}


void phonebook::search_contacts()const
{
    display_contact_summary();
    std::cout << "Enter index of contact to display:"<< std::endl;
    
    std::string input;
    std::getline(std::cin, input);
    if (int index = atoi(input.c_str()))
    {
        if(std::cin.eof())
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << "EOF detected" << std::endl;
            exit(1);
        }    
        if (index < 0 || index >= total_contacts)
            std::cout << "Invalid index" << std::endl;
        else
            return;
            // display_contact_details(index);
    }
    else
        std::cout << "Invalid index" << std::endl;
}

void phonebook::display_contact_details(int index) const
{
    std::cout << "First Name" << contacts[index].getfirstname() << std::endl;
    std::cout << "Last Name" << contacts[index].getlastname() << std::endl;
    std::cout << "Nickname" << contacts[index].getnickname() << std::endl;
    std::cout << "Phone number" << contacts[index].getphonenumber() << std::endl;
    std::cout << "Darkest secret" << contacts[index].getdarkestsecret() << std::endl;
}