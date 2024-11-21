/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 01:07:50 by pipe              #+#    #+#             */
/*   Updated: 2024/11/18 17:05:56 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void contact::setfirstname(const std::string &name)
{
    firstname = name;
}

void contact::setlastname(const std::string &name)
{
    lastname = name;
}
void contact::setnickname(const std::string &name)
{
    nickname = name;
}

void contact::setphonenumber(const std::string &number)
{
    // std::cout << number << std::endl;
    phonenumber = number;
}

void contact::setdarkestsecret(const std::string &secret)
{
    darkestsecret = secret;
}
std::string contact::getfirstname()const 
{
    return firstname;   
}

std::string contact::getlastname()const
{
    return lastname;
}

std::string contact::getnickname()const
{
    return nickname;
}

std::string contact::getphonenumber()const
{
    return  phonenumber;
}

std::string contact::getdarkestsecret()const
{
    return   darkestsecret;
}
