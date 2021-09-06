/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   complex_numbers.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/06 14:44:02 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/06 15:43:53 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_NUMBERS_H
# define COMPLEX_NUMBERS_H

typedef struct s_complex
{
	long double	re;
	long double	im;
}				t_complex;

t_complex	_complex(long double real, long double imaginair);
t_complex	complex_mul(t_complex n1, t_complex n2);
t_complex	complex_div(t_complex n1, t_complex n2);
t_complex	complex_pow(t_complex n, unsigned int power);

#endif