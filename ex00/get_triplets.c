/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triplets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:55:31 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:55:33 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "t_triplet.h"
#include <stdlib.h>

void	free_triplets(t_triplet *triplets, int idx)
{
	while (--idx >= 0)
	{
		free(triplets[idx].digits);
	}
	free(triplets);
}

t_triplet	*fill_triplets(char *str, t_triplet *triplets, int length, int *j)
{
	int	i;

	i = length;
	*j = 0;
	while (i > 0)
	{
		triplets[*j].idx = *j;
		if (i >= 3)
		{
			triplets[*j].digits = ft_strndup(str + i - 3, 3);
		}
		else
		{
			triplets[*j].digits = ft_strndup(str, i);
		}
		if (!triplets[*j].digits)
		{
			free_triplets(triplets, *j);
			return (NULL);
		}
		i -= 3;
		(*j)++;
	}
	return (triplets);
}

t_triplet	*ft_get_triplets(char *str)
{
	int			length;
	int			j;
	t_triplet	*triplets;

	length = ft_strlen(str);
	if (length % 3 == 0)
		triplets = (t_triplet *)malloc((length / 3 + 1) * sizeof(t_triplet));
	else
		triplets = (t_triplet *)malloc((length / 3 + 2) * sizeof(t_triplet));
	if (!triplets)
		return (NULL);
	triplets = fill_triplets(str, triplets, length, &j);
	if (triplets)
		triplets[j].digits = (NULL);
	return (triplets);
}
