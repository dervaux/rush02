/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:03:55 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:03:58 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "t_triplet.h"
#include <stdlib.h>

void	print_less_than_twenty(unsigned int i)
{
	char	*word;

	word = get_word(i);
	if (i != 0)
	{
		ft_putstr(word);
		ft_putchar(' ');
	}
}

void	print_more_than_nineteen(unsigned int i)
{
	char	*tens;
	char	*units;

	tens = get_word((i / 10) * 10);
	units = get_word(i % 10);
	ft_putstr(tens);
	ft_putchar(' ');
	if (i % 10 != 0)
	{
		ft_putstr(units);
		ft_putchar(' ');
	}
}

void	print_tens(char *n_str)
{
	unsigned int	i;

	i = ft_atoui(n_str) % 100;
	if (i < 20)
		print_less_than_twenty(i);
	else if (i > 19)
		print_more_than_nineteen(i);
}
