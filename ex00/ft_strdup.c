/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:58:48 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:58:50 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strlen.h"
#include "ft_strcpy.h"
#include "ft_strncpy.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(*src) * (len + 1));
	return (ft_strcpy(dest, src));
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (n + 1));
	return (ft_strncpy(dest, src, n));
}
