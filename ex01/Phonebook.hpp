/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:52:27 by dbonilla          #+#    #+#             */
/*   Updated: 2024/11/18 17:33:32 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"
#include <string>


class phonebook
{
    private:
        contact contacts[8];
        int current_contact_index;
        int total_contacts;

        void display_contact_summary() const;
        void display_contact_details(int index) const;
    
    public:
        phonebook();
        void add_contact();
        // bool isvalidphonenumber(const std::string &number) const;
        void search_contacts() const;
};

#endif