/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalente <svalente@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:49:23 by svalente          #+#    #+#             */
/*   Updated: 2023/09/11 11:16:43 by svalente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

//------------ Includes ------------
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <limits.h>
# include <sys/time.h> // get time
# include <stdint.h> // uint64_t unsigned long long integer which is guaranteed to be exactly 8 bytes in size
# include <unistd.h> // usleep
# include <stddef.h> // NULL

//------------ Defines --------------

//------------ Structs --------------

typedef struct s_data
{
	int			n_philos;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	int			n_eat;
	uint64_t	start;
	pthread_t	*philos;	
}		t_data;

typedef struct s_philos
{
	pthread_t		philo;
	int				id;
	int				n_eats;
	pthread_mutex_t	*fork;
}				t_philos;


//------------ Prototypes -----------

void		check_arguments(int ac, char **av);
t_data 		*data(void);


void		ft_putstr_fd(char *str, int fd);
void		ft_error_msg(char *msg);
int			ft_atoi(const char *str);
uint64_t	get_time(void);

void		*routine(void *philos);
void		(t_data	*data);


#endif