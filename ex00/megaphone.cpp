
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
#include <cstring> // Para std::strlen
#include <bitset>

void process_arguments(int argc, char **str) {
    (void)argc;
    int i = 1;
    int j = 0;
    while(i < argc)
    {
        while (str[i][j]) {
            unsigned char current_char = (unsigned char)str[i][j];

            if (current_char == 0xC3 && (unsigned char)str[i][j + 1] == 0xB1) {
                std::cout << "\xC3\x91";
                j += 2;
            }
            else if (current_char >= 'a' && current_char <= 'z') {
                std::cout << (char)(current_char - ('a' - 'A'));
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

void printBits(const unsigned char* str) {
    int i = 0;
    while (str[i] != '\0') {
        std::cout << "Byte " << i + 1 << ": " << std::bitset<8>(str[i]) << std::endl;
        i++;
    }
}
int main(int argc, char **argv) {

    if (argc > 1)
    {
        printBits(reinterpret_cast<const unsigned char*>(argv[1]));
        process_arguments(argc, argv);
        printBits(reinterpret_cast<const unsigned char*>(argv[1]));

    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}




