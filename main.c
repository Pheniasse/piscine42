/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:38:44 by nwyseur           #+#    #+#             */
/*   Updated: 2022/07/17 20:10:44 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_board(int tableau[4][4]);
void	ft_init_contrainte(int tabvert[4][2], int tabhori[4][2], char *imput);
int		ft_remp(int tableau[4][4], int tabvert[4][2], int tabhori[4][2], int i);
void	ft_print_out(int tableau[4][4]);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*check imput: on regarde dans la string de depart
si tous les arguments sont compris entre 1 et 4
entrecoupe d'espace*/
int	ft_checkimput(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && (str[i] <= '4' && str[i] >= '1'))
			i++;
		else if (i % 2 == 1 && str[i] == 32)
			i++;
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

/* MAIN: on check les arguments, le nombre avec argc,
la longueur avec strlen(argv),
les imputs avec checkimput si les arguments 
sont faux on return error> */
int	main(int argc, char **argv)
{
	int	tableau[4][4];
	int	tabvert[4][2];
	int	tabhori[4][2];

	if (argc == 2 && ft_strlen(argv[1]) == 31)
	{
		if (ft_checkimput(argv[1]) == 1)
		{
			ft_init_board(tableau);
			ft_init_contrainte(tabvert, tabhori, argv[1]);
			if (ft_remp(tableau, tabvert, tabhori, 0) == 0)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			else
				ft_print_out(tableau);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
