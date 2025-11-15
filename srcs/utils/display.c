/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julescamuzet <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:27:03 by julescamuzet      #+#    #+#             */
/*   Updated: 2025/11/15 00:42:57 by julescamuzet     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

#include <string.h>
#include <stdio.h>

void	display_error(char *fn)
{
	printf("%s\e[31m\t\t\t", fn);
	if (strlen(fn) < 8)
		printf("\t");
	printf("Error\e[0m\n");
}

void	display_success(char *fn)
{
	printf("%s\e[32m\t\t\t", fn);
	if (strlen(fn) < 8)
		printf("\t");
	printf("Success\e[0m\n");
}

void	display_undone(char *fn)
{
	printf("%s\e[33m\t\t\t", fn);
	if (strlen(fn) < 8)
		printf("\t");
	printf("Undone\e[0m\n");
}

void	display_result(int res, char *fn)
{
    if (res == 0)
		display_error(fn);
	else if (res == 1)
		display_success(fn);
	else
	    display_undone(fn);
}
