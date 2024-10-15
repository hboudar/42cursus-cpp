/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:57:38 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/13 18:30:17 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;

    if (argc != 1)
    {
        while (argv[1] != NULL)
        {
            i = 0;
            while (argv[1][i] != '\0')
            {
                std::cout << (char)toupper(argv[1][i]);
                i++;
            }
            argv++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
