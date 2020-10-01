/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atron <atron@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 09:52:32 by atron             #+#    #+#             */
/*   Updated: 2020/09/27 15:25:01 by jtondeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#define DICT "./number.dict"

int  ft_strlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}

int		main(int argc, char **argv)
{


/*	int i;
	int argvlen;

	i = 0;
	argvlen = ft_strlen(argv[1])
	while (argv[1])
		while (argvlen == nb_lenght)
		if (argvlen % 3 == 0)
		{
			ft_putchar()
		}
		if (argvlen % 3 == 2)
		{
		
		}
		if (argvlen % 3 == 1)
		{
		
		}
		argvlen - 3;*/
}

char check_numbers(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= '0' || str[i] >= '9')
			return (-1);
		i++;
	}
	return (0);
}
