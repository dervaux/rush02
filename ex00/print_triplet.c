/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_triplet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:03:55 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:03:58 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "t_triplet.h"
#include "print_tens.h"
#include <stdlib.h>

void	print_hundreds(char *n_str)
{
	unsigned int	i;

	i = ft_atoui(n_str);
	if (i >= 100)
	{
		ft_putstr(get_word(i / 100));
		ft_putchar(' ');
		ft_putstr(get_word(100));
		ft_putchar(' ');
	}
}

void	print_end_of_triplets(char *n_str, int idx)
{
	unsigned int	i;

	i = ft_atoui(n_str);
	if (i != 0)
	{
		if (idx == 3)
			ft_putstr(get_word(1000000000));
		else if (idx == 2)
			ft_putstr(get_word(1000000));
		else if (idx == 1)
			ft_putstr(get_word(1000));
		ft_putchar(' ');
	}
}

void	print_triplet(char *n_str, int idx)
{
	print_hundreds(n_str);
	print_tens(n_str);
	print_end_of_triplets(n_str, idx);
}
