/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtondeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:35:44 by jtondeli          #+#    #+#             */
/*   Updated: 2020/09/20 18:37:57 by jtondeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swapping(char *str, int i, int nb, int tmp)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			tmp = tmp + (str[i] - 48);
		}
		else
		{
			tmp = (tmp + (str[i] - 48)) * 10;
		}
		i++;
	}
}

int	ft_atoi(char *str)
{
	int  i;
	int  nb;
	int tmp;

	i = 0;
	nb = 1;
	tmp = 0;
	while (str[i])
	{
		while (str[i] < ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				nb *= -1;
			i++;
		}
		swapping(str, i, nb, tmp);
		return (nb * tmp);
		i++;
	}
	return (0);
}
