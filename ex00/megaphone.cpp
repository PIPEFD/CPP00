/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:46:37 by dbonilla          #+#    #+#             */
/*   Updated: 2024/08/17 14:02:42 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



void process_arguments(int argc, char **str)
{
    int i = 1;
    while (i  < argc)
    {
        int j = 0;
        while(str[i][j])
        {
            std::cout << (char)std::toupper(str[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}

int main (int argc, char **argv)
{
    if (argc > 1)
         process_arguments(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(0);
}
