/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtondeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 19:27:56 by jtondeli          #+#    #+#             */
/*   Updated: 2020/09/19 19:44:14 by jtondeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	line_up(char *str)
{
	int i;
	int j;
	char up[5];

	i = 0;
	j = 0;
	while (str[i] && i <= 7)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			up[j] = str[i];
			j++;
		}
		i++;
	}
	return (up);
}

void	line_down(char *str)
{
	int i;
	int j;
	char down[5];

	i = 8;
	j = 0;
	while (str[i] && i <= 15)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			down[j] = str[i];
			j++;
		}
		i++;
	}
	return (down);
}
	
void	column_left(char *str)
{
	int i;
	int j;
	char left[5];

	i = 16;
	j = 0;
	while (str[i] && i <= 23)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			left[j] = str[i];
			j++;
		}
		i++;
	}
	return (left);
}

void	column_right(char *str)
{
	int i;
	int j;
	char right[5];

	i = 24;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			right[j] = str[1][i];
			j++;
		}
		i++;
	}
	return (right);
}
