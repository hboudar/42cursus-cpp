/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:19:31 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 22:24:53 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string command;
    int         i;

    i = 7;
    while (1)
    {
        (1) && (phonebook.set_oldest(i), i = (i + 1) % 8);
        std::cout << "Enter a command :";
        std::getline(std::cin, command);
        if (!command.compare(0, 4, "ADD"))
            phonebook._add(phonebook);
        else if (!command.compare(0, 7, "SEARCH"))
            phonebook._search(phonebook);
        else if (!command.compare(0, 5, "EXIT"))
            phonebook._exit(phonebook);
        else
            break ;
    }
    return (0);
}
