/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:34:22 by morishitash       #+#    #+#             */
/*   Updated: 2023/08/03 03:02:55 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/includes/libft.h"

int	check_from_commandline(char **argv)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (argv[1][i] != '\0')
	{
		if (ft_isdigit(argv[1][i]) == 0 && argv[1][i] != '-' && flag == 1)
			return (1);
		if (argv[1][i] == '-')
			flag = 1;
		i++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	if (argc == 2)
		return (check_from_commandline(argv));
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
