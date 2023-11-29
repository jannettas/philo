/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsoltani <zsoltani@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:42:25 by zsoltani          #+#    #+#             */
/*   Updated: 2023/11/30 00:41:30 by zsoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void error_message(char *message)
{
    write(2, message, ft_strlen(message));
    exit(1);
}

void	print_data(t_data data, int ac)
{
	if (ac == 6)
	{
		printf("|\tnb philos\t|\ttime to die\t|\ttime to eat\t|\ttime to sleep\t|\tnb of meals\t|\n");
		printf("|\t%d\t\t|\t%d\t\t|\t%d\t\t|\t%d\t\t|\t%d\t\t|\n", data.nb_philo, data.time_to_die,
		data.time_to_eat, data.time_to_sleep, data.nb_meals);
	}
	else
	{
		printf("|\tnb phils\t|\ttime to die\t|\ttime to eat\t|\ttime to sleep\t|\n");
		printf("|\t%d\t\t|\t%d\t\t|\t%d\t\t|\t%d\t\t|\n",  data.nb_philo, data.time_to_die,
		data.time_to_eat, data.time_to_sleep);
	}
}