/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_contraintes_verti.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:14:50 by nwyseur           #+#    #+#             */
/*   Updated: 2022/07/17 19:51:37 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fonction de test de haut en bas*/
int	ft_compare_colonne(int tableau[4][4], int colonne)
{
	int	digit;
	int	depl;
	int	cm;

	digit = 0;
	depl = 0;
	cm = 0;
	while (depl < 4)
	{
		if (tableau[depl][colonne] > cm)
		{
			cm = tableau[depl][colonne];
			digit = digit + 1;
		}
		depl++;
	}
	return (digit);
}

/* fonction de test de bas en haut*/
int	ft_compare_colonne_reverse(int tableau[4][4], int colonne)
{
	int	digit;
	int	depl;
	int	cm;

	digit = 0;
	depl = 3;
	cm = 0;
	while (depl >= 0)
	{
		if (tableau[depl][colonne] > cm)
		{
			cm = tableau[depl][colonne];
			digit = digit + 1;
		}
		depl--;
	}
	return (digit);
}

/* fonction de test des colonnes*/
int	ft_cvr(int tableau[4][4], int tabvert[4][2], int i, int colonne)
{
	int	digit;

	if (i >= 12 && i <= 15)
	{
		digit = ft_compare_colonne(tableau, colonne);
		if (digit == tabvert[colonne % 4][0])
		{
			digit = ft_compare_colonne_reverse(tableau, colonne);
			if (digit == tabvert[colonne % 4][1])
				return (1);
		}
		return (0);
	}
	else
		return (1);
}
