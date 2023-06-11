/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_to_text.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:03:55 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:03:58 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_all.h"
#include "ft.h"

int	ft_nb_to_text(char *str)
{
	char			*filtered_nb;
	unsigned int	int_n;
	t_triplet		*triplets;

	filtered_nb = ft_filter_nb(str);
	if (filtered_nb == 0)
	{
		ft_putstr("Error");
		return (1);
	}
	int_n = ft_atoui(filtered_nb);
	if (int_n != 0)
	{
		triplets = ft_get_triplets(filtered_nb);
		print_all(triplets);
	}
	else
	{
		ft_putstr(get_word(0));
		ft_putchar('\n');
	}
	return (0);
}
