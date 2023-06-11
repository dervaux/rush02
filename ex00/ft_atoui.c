/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abied-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:51:52 by abied-ch          #+#    #+#             */
/*   Updated: 2023/06/10 16:46:17 by abied-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_atoui(char *str)
{
	unsigned long long	res;
	int					i;

	i = 0;
	res = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == 'f')
		i++;
	if (str[i] == '-')
	{
		return ('\0');
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (res);
		if ((res * 10 + (str[i] - 48)) > 4294967295)
		{
			return ('\0');
		}
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}
