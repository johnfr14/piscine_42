/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtondeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 08:58:44 by jtondeli          #+#    #+#             */
/*   Updated: 2020/09/20 19:19:33 by jtondeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_putchar.c"
#include "parametre.c"
#include "rush01.c"

// fonction recherche des numeros



int main()
{
//	nos 4 chaine de caractere
	char uprow[] = "";
	char downrow[] = "";
	char leftrow[] = "";
	char rightrow[] = "";

	line_up(uprow);
	line
///////////////////////////////////////		
	int r;
	int i;
	int j;
	int c;
    int sudoku[6][6] = { {0, 4, 3, 2, 1, 0},
						 {4, 0, 0, 0, 0, 1},
						 {3, 0, 0, 0, 0, 2},
				 		{2, 0, 0, 0, 0, 2},
						 {1, 0, 0, 0, 0, 2},
						 {0, 1, 2, 2, 2, 0}};
	i = 0;
	c = 0;



// Affichage du tableau

	i = 1;
	j = 1;

    while (i < 5)
	{
		while (j < 5)
		{
			printf(" %d", sudoku[i][j]);
			j++;
		}
      	printf("\n");
		j = 1;
		i++;	
	}
	return 0;
}
