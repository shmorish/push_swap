/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:32:11 by morishitash       #+#    #+#             */
/*   Updated: 2023/08/03 02:27:21 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

int					check_args(int argc, char **argv);


int *putargs2stack(int argc, char **argv, int counter);
// sa, sb, ss
// pa, pb
// ra, rb, rr
// rra, rrb, rrr

#endif