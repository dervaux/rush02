/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_triplet.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdervaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:20:07 by fdervaux          #+#    #+#             */
/*   Updated: 2023/06/10 15:21:05 by fdervaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this struct represents a group of 3 digits that can either be:
	- just hundreds, for ex. "243" (idx = 0)
	- thousands, for ex. "243" in "234 567" (idx = 1);
	- millions, for ex. "243" in "243 567 890" (idx = 2);
	- billions. for ex. "3" in "3 000 000 000" (idex = 3);
*/

#ifndef T_TRIPLET_H
# define T_TRIPLET_H

typedef struct s_triplet
{
	int		idx;
	char	*digits;
}		t_triplet;

t_triplet	*ft_get_triplets(char *str);

#endif
