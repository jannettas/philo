/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsoltani <zsoltani@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:12:56 by zsoltani          #+#    #+#             */
/*   Updated: 2023/11/30 00:29:40 by zsoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

// ascii to positive integer (atopi)
int ft_atopi(const char *str)
{
    int         i;
    long long   nb;

    i = 0;
    nb = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
        || str[i] == '\r' || str[i] == ' ' || str[i] == '+')
        i++;
    if (str[i] == '-')
            error_message("Negative arguments are not accepted\n");
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
        if (nb > 2147483647)
            error_message("Argument greater than INT_MAX not ok\n");
    }
    return ((int)nb);
}

int	validate_input(const char *str)
{
    int nb;
    
    if (ft_strlen(str) > 10)
        error_message("Wrong arguments: >10 digits\n");
    nb = ft_atopi(str);
    if (nb < 1)
        error_message("Wrong arguments: negative or 0\n");
    return (nb);
}

int	init_data_struct(t_data *data, int ac, char **av)
{
    data->nb_philo = validate_input(av[1]);
    data->time_to_die = validate_input(av[2]);
    data->time_to_eat = validate_input(av[3]);
    data->time_to_sleep = validate_input(av[4]);
    data->nb_meals = -1;
    if (ac == 6)
        data->nb_meals = validate_input(av[5]);
    return (0);
}