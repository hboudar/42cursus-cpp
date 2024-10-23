/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:13:03 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 18:50:01 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook {

    private:
        Contact contacts[8];
        int oldest_contact = 0;
    public:
        void    _add(PhoneBook phonebook);
        void    _exit(PhoneBook phonebook);
        void    _search(PhoneBook phonebook);
        void    set_oldest() {oldest_contact++; }
        int     get_oldest() {return (oldest_contact); }
    private:
};
