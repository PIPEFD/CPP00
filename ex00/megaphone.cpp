
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


void process_arguments(int argc, char **str) {

    int i, j;
    i = 1;
    j = 0;
    while(i < argc)
    {
        while (str[i][j]) {
            unsigned char current_char = (unsigned char)str[i][j];

            if (current_char == 0xC3 && (unsigned char)str[i][j + 1] == 0xB1) {
                std::cout << "\xC3\x91";
                j += 2;
            }
            else if (current_char >= 'a' && current_char <= 'z') {
            std::cout << (char)std::toupper(current_char);
                j++;
            }
            else {
                std::cout << current_char;
                j++;
            }
        }
        i++;
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) 
{

    if (argc > 1)
        process_arguments(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}




