/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_remplissage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:50:16 by nwyseur           #+#    #+#             */
/*   Updated: 2022/07/17 19:21:54 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_dblcolck(int tableau[4][4], int colonne, int nombre);
int	ft_dbllick(int tableau[4][4], int ligne, int nombre);
int	ft_compare_case(int tableau[4][4], int ligne);
int	ft_compare_case_reverse(int tableau[4][4], int ligne);
int	ft_cho(int tableau[4][4], int tabvert[4][2], int i, int ligne);
int	ft_compare_colonne(int tableau[4][4], int ligne);
int	ft_compare_colonne_reverse(int tableau[4][4], int ligne);
int	ft_cvr(int tableau[4][4], int tabhori[4][2], int i, int colonne);

/* backtracking */
int	ft_remp(int tab[4][4], int tabv[4][2], int tabh[4][2], int i)
{
	int	li;
	int	col;
	int	nbr;

	nbr = 1;
	col = i % 4;
	li = i / 4;
	if (i == 16)
		return (1);
	while (nbr <= 4)
	{
		if (ft_dblcolck(tab, col, nbr) == 1 && ft_dbllick(tab, li, nbr) == 1)
		{
			tab[li][col] = nbr;
			if (ft_cho(tab, tabh, i, li) == 1 && ft_cvr(tab, tabv, i, col) == 1)
			{
				if (ft_remp(tab, tabv, tabh, i + 1) == 1)
					return (1);
			}
		}
		nbr++;
	}
	tab[li][col] = 0;
	return (0);
}
