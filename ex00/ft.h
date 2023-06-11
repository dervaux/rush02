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

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

unsigned int		ft_atoui(char *str);
void				ft_putchar(char c);
char				*ft_strdup(char *src);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
char				*ft_uitoa(int nb);
char				*get_word(int n);
char				*ft_strndup(char *src, int n);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);
char				*ft_strndup(char *src, int n);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
int					ft_nb_to_text(char *str);
char				*ft_filter_nb(char *str);
struct s_triplet	*str_nb_to_triplets(char *str_nb);

#endif
