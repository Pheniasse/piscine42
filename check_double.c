/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:10:08 by nwyseur           #+#    #+#             */
/*   Updated: 2022/07/17 19:42:06 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* on check les doubles dans les colonnes*/
int	ft_dblcolck(int tableau[4][4], int colonne, int nombre)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tableau[i][colonne] == nombre)
			return (0);
		i++;
	}
	return (1);
}

/* on check les doubles dans les lignes*/
int	ft_dbllick(int tableau[4][4], int ligne, int nombre)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tableau[ligne][i] == nombre)
			return (0);
		i++;
	}
	return (1);
}
