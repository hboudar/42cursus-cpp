/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:19:31 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 18:53:31 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_command(PhoneBook &phonebook, std::string command)
{
    if (!command.compare(0, 4, "ADD"))
        phonebook._add(phonebook);
    else if (!command.compare(0, 7, "SEARCH"))
        phonebook._search(phonebook);
    else if (!command.compare(0, 5, "EXIT"))
        phonebook._exit(phonebook);
    else
        return 1;
    return 0;
}

int main()
{
    PhoneBook   phonebook;

    std::string command;

    while (1)
    {
        std::getline(std::cin, command);
        if (check_command(phonebook, command))
           break ;
    }
    return (0);
}
