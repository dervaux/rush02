/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:03:55 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:03:58 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_triplet.h"
#include "print_triplet.h"
#include "ft.h"
#include <stdlib.h>

int	count_triplets(t_triplet *triplets)
{
	int	i;

	i = 0;
	while (triplets[i].digits != NULL)
		i++;
	return (i);
}

void	print_all(t_triplet *triplets)
{
	int	i;

	i = count_triplets(triplets);
	while (i > 0)
	{
		print_triplet(triplets[i - 1].digits, triplets[i - 1].idx);
		i--;
	}
	ft_putchar('\n');
}
