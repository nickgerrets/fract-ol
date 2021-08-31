/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/23 12:00:08 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/08/31 12:54:41 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

int		ft_strlen(const char *str);
void	put(const char *str, const int *n);
int		str_is_str(const char *str1, const char *str2);
double	str_to_double(char *str);

#endif
