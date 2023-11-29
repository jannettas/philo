/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsoltani <zsoltani@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:34:52 by zsoltani          #+#    #+#             */
/*   Updated: 2023/11/30 00:36:51 by zsoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>    // printf
# include <unistd.h>   // write, usleep
# include <stdlib.h>   // malloc, free, exit
# include <sys/time.h> // gettimeofday
# include <limits.h>   // INT_MAX, INT_MIN
# include <stdbool.h>  // bool
# include <pthread.h>  // pthread_create, pthread_detach, pthread_join 
                       // mutex_init, mutex_lock, mutex_unlock, mutex_destroy


typedef struct s_data   t_data; 

typedef struct  s_philo
{
    int id;
    int nb_meals_eaten;
    int time_since_last_meal;
    bool full; // true if philo has eaten enough meals (nb_meals_eated == nb_meals)
    t_data *data; 
}               t_philo;

typedef struct s_data
{
    //arguments
    int nb_philo;
    int time_to_die;
    int time_to_eat;
    int time_to_sleep;
    int nb_meals; // limit of number of meals each philo must eat nbr_limit_meals

    long start_time; // start simulation
    bool someone_is_dead; // end simulation
}               t_data; //t_table 

// utils.c
void error_message(char *message);
int ft_atopi(const char *str);
int ft_strlen(const char *str);
int validate_input(const char *str);

// init.c
int init_data_struct(t_data *data, int ac, char **av);
void    print_data(t_data data, int ac);

#endif

