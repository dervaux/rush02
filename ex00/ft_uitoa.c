/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abied-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:51:52 by abied-ch          #+#    #+#             */
/*   Updated: 2023/06/10 16:46:17 by abied-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_unsigned_int_to_str(unsigned int ui, char *str)
{
	long long	divider;
	int			i;

	i = 0;
	divider = 1;
	while (divider * 10 <= ui)
		divider = divider * 10;
	while (divider)
	{
		str[i] = ui / divider + 48;
		i++;
		ui = ui % divider;
		divider = divider / 10;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_uitoa(int nb)
{
	unsigned int	ln;
	char			*str;

	str = (char *)malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	ln = nb;
	str = ft_unsigned_int_to_str(ln, str);
	return (str);
}
