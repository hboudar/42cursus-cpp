/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:19:31 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/24 13:22:12 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string command;

    phonebook.set_oldest(7);
    while (1)
    {
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
