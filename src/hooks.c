/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hooks.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/29 10:59:09 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/08/30 15:12:45 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"
#include "keycodes.h"
#include "fractals.h"

/*
**	Key pressed hook. Used to exit the program (esc) or move/zoom
*/
int	hook_key_pressed(int key, t_program *program)
{
	if (key == KEY_ESC)
		program_quit(program);
	if (key == KEY_A)
		program->cx -= 0.5 * program->zoom;
	if (key == KEY_D)
		program->cx += 0.5 * program->zoom;
	if (key == KEY_W)
		program->cy -= 0.5 * program->zoom;
	if (key == KEY_S)
		program->cy += 0.5 * program->zoom;
	if (key == KEY_Z && program->iterations > 1)
		program->iterations /= 2;
	if (key == KEY_X)
		program->iterations *= 2;
	if (key == KEY_SPACE)
	{
		program->zoom *= 0.5;
		(program->zoomi)++;
	}
	program->iterations = 32 + program->zoomi * 16;
	julia(program);
		return (0);
}

/*
**	Press the window X hook. Used to exit the program.
*/
int	hook_press_x(t_program *program)
{
	program_quit(program);
	return (0);
}
