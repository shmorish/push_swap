/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:34:22 by morishitash       #+#    #+#             */
/*   Updated: 2023/07/31 19:40:00 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		flag = 0;
		if (ft_isint(argv[i]) == 0)
			return (1);
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != '-' && flag == 1)
				return (1);
			if (argv[i][j] == '-')
				flag = 1;
			j++;
		}
		i++;
	}
	return (0);
}
