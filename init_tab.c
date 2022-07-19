/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:32:08 by nwyseur           #+#    #+#             */
/*   Updated: 2022/07/17 19:18:06 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* on initie notre tableau qui va recevoir les chiffres de la solution
on le remplie initialement avec des 0*/
void	ft_init_board(int tableau[4][4])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		tableau[i / 4][i % 4] = 0;
		i++;
	}
}

/* on initie nos tableaux qui vont recevoir les contraintes, on initie 2
tableaux, 1 pour les contraintes horizontales et 1 pour verticales*/
void	ft_init_contrainte(int tabvert[4][2], int tabhori[4][2], char *imput)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 8)
	{	
		if (imput[j] != ' ')
		{
			tabvert[i % 4][i / 4] = imput[j] - 48;
			i++;
		}
		j++;
	}
	i = 0;
	while (i < 8)
	{	
		if (imput[j] != ' ')
		{
			tabhori[i % 4][i / 4] = imput[j] - 48;
			i++;
		}
		j++;
	}
}
