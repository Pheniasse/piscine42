/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_contraintes_hori.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:12:19 by nwyseur           #+#    #+#             */
/*   Updated: 2022/07/17 19:52:58 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fonction de gauche a droite*/
int	ft_compare_case(int tableau[4][4], int ligne)
{
	int	digit;
	int	depl;
	int	cm;

	digit = 0;
	depl = 0;
	cm = 0;
	while (depl < 4)
	{
		if (tableau[ligne][depl] > cm)
		{
			cm = tableau[ligne][depl];
			digit = digit + 1;
		}
		depl++;
	}
	return (digit);
}

/* fonction de droite a gauche*/
int	ft_compare_case_reverse(int tableau[4][4], int ligne)
{
	int	digit;
	int	depl;
	int	cm;

	digit = 0;
	depl = 3;
	cm = 0;
	while (depl >= 0)
	{
		if (tableau[ligne][depl] > cm)
		{
			cm = tableau[ligne][depl];
			digit = digit + 1;
		}
		depl--;
	}
	return (digit);
}

/* fonction de test des lignes*/
int	ft_cho(int tableau[4][4], int tabhori[4][2], int i, int ligne)
{
	int	digit;

	if (i == 3 || i == 7 || i == 11 || i == 15)
	{
		digit = ft_compare_case(tableau, ligne);
		if (digit == tabhori[ligne % 4][0])
		{
			digit = ft_compare_case_reverse(tableau, ligne);
			if (digit == tabhori[ligne % 4][1])
				return (1);
		}
		return (0);
	}
	else
		return (1);
}
