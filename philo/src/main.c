/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsoltani <zsoltani@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:36:50 by zsoltani          #+#    #+#             */
/*   Updated: 2023/11/30 00:36:44 by zsoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main (int ac, char ** av)
{
    t_data data;

    if (ac == 5 || ac == 6)
    {
        init_data_struct(&data, ac, av);
        print_data(data, ac);
    }
    else
        error_message("Wrong number of arguments\n");
    return (0);
}