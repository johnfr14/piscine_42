/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtondeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:06:18 by jtondeli          #+#    #+#             */
/*   Updated: 2020/09/20 19:07:42 by jtondeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// y => lignes
// x => colonnes

int	rowleft_check(int **tab, int **obs, int y, int x)
{
	// check row left
	int value;
	int c;
	int i;

   	i = 0;
	c = 0;
	value = 0;
	while (i <= 3)
	{
		if (tab[y][i] > value)
		{
			value = tab[y][i];
			c++;
		}
		i++;
	}
	if (c == obs[2][y])
		return (1);
	return (0);
}

int rowright_check(int **tab, int **obs, int y, int x)
{
	// check row right
	int value;
	int c;
	int i;

	i = 3;
	c = 0;
	value = 0;
	while (i > -1)
	{
		if (tab[y][i] > value)
		{
			value = tab[y][i];
			c++;
		}
		i++;
	}
	if (c == obs[3][y])
		return (1);
	return (0);
}

int colup_check(int **tab, int **obs, int y, int x)
{
	// check col up
	int value;
	int c;
	int j;

	j = 0;
	value = 0;
	c = 0;
	while (j <= 3)
	{
		if (tab[j][x] > value)
		{
			value = tab[j][x];
			c++;
		}
		i++;
	}
	if (c == obs[0][x])
		return (1);
	return (0);
}

int coldown_check(int **tab, int **obs, int y, int x)
{
	// check col down
	int value;
	int c;
	int j;

	j = 3;
	value = 0;
	c = 0;
	while (j > -1)
	{
		if (tab[j][x] > value)
		{
			value = tab[j][x];
			c++;
		}
		i++;
	}
	if (c == obs[1][x])
		return (1);
	return (0);
}

int	check_double(int **tab, int y, int x)
{
	// checker les doublons
	int i;
	int j;
	
	i = 0;
	j = 0;
	// check lignes
	if (y > 0)
	{	
		while (i < y)
		{
			if (tab[y][x] == tab[y][i])
					return (0);
			i++;		
		}
	}
	// check colonnes
	if (x > 0)
	{
		while (j < x)
		{
			if (tab[y][x] == tab[j][i])
				return (0);
			j++;
		}
	}
	return (1);
}

// afficher tableau
void	print_tab(int **tab)
{
	int i;
	int j;
	
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	ft_scraper(int **tab, int **obs, int y, int x)
{
	tab[y][x] = 1;
	while (tab[y][x] <= 4)
	{
		// si il n'y pas de doublons on rentre dans cette condition
		if(check_double(tab, obs, y, x) && x < 4)
		{
			// si on est a la fin d'une ligne mais pas d'une colonne
			if (y == 4 && x < 4)
			{
				// on check ligne
				if (rowleft_check(tab, obs, y, x) && rowright_check(tab, obs, y, x))
					ft_scraper(tab, obs, y, x+1);
			}
			
			// si on est a la fin d'une colonne mais pas d'une ligne
			if (x == 4 && y < 4)
			{
				//on check colonne
				if (colup_check(tab, obs, y, x) && coldown_check(tab, obs, y, x))
				{
					x = 0;
					ft_scraper(tab, obs, y+1, x);
				}
			}
			// si on est ni a la fin d'une ligne , ni a la fin d'une colonne
			if (y < 4 && x < 4)
			{
				// on passe a la prochaine colonne
				ft_scraper(tab, obs, y, x+1);
			}
			// si on est a la fin d'une ligne ET d'une colonne
			if ( y == 4 && x == 4)
			{
				// on check ligne et colonne
				if (rowleft_check(tab, obs, y, x) && rowright_check(tab, obs, y, x) && 
						colup_check(tab, obs, y, x) && coldown_check(tab, obs, y, x))
				{
						// tout est ok
						// on print le tableau
						print_tab(tab);
						return ;
				}
			}
		}
		// si on rentre pas dans notre premier if, on incremente !
		tab[y][x]++;
	}
	return ;
}

int main()
{
	int tab[4][4] = {{0, 0, 0, 0},
					{0, 0, 0, 0},
					{0, 0, 0, 0},
					{0, 0, 0, 0} };

	int obs[4][4] = {{4, 3, 2, 1},
					{1, 2, 2, 2},
					{4, 3, 2, 1},
					{1, 2, 2, 2} };
	
	int x = 0;
	int y = 0;

	ft_scraper(tab, obs, y, x);
	return (0);
}
