/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:34:19 by dbonilla          #+#    #+#             */
/*   Updated: 2024/11/06 09:47:43 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>


class contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
		
	public:
		void setfirstname (const std::string &name);
		void setlastname (const std::string &name);
		void setnickname (const std::string &name);
		void setphonenumber (const std::string &number);
		void setdarkestsecret (const std::string &secret);

		std::string getfirstname() const;
		std::string getlastname() const;
		std::string getnickname() const;
		std::string getphonenumber() const;
		std::string getdarkestsecret() const;
	
};

#endif