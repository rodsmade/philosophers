/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 22:46:42 by wleite            #+#    #+#             */
/*   Updated: 2021/12/26 00:23:13 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

//n_of_philos || time_to_die || time_to_eat || time_to_sleep || times_must_eat

int	main(int argc, char **argv)
{
	t_args	args;

	init_philo(&args);
	get_args(argc, argv, &args);
	// print_args(args);
	return (0);
}
