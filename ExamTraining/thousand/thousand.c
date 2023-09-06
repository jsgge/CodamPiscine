/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thousand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:50:39 by jsage             #+#    #+#             */
/*   Updated: 2023/09/05 15:10:42 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Rendre division par 1000 d'une str

// 999 = 0
// -999 = 0

// 1000 = 0
// -1000 = -1
// 13333.544 = 1

// si pas digit -> -1
// .1000 = -1
// 1345t01 = -1
// --98457 = -1

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putchar(int nb)
{
	char c;

	c = nb + '0';
	write(1, &c, 1);
}

int check_digit(char **argv)
{
	int i;

	i = 0;
	if (argv[1][i] == '-')
	{
		i++;
	}
	while (argv[1][i])
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

void	ft_thousand(int nb)
{
	int res;

	res = nb / 1000;
	if (nb == INT_MIN)
		write(1, "INT_MIN", 11);
	if (nb > 9)
		ft_thousand(nb / 10);
	if (nb >= 0)
		ft_putchar(nb % 10);
}

int atoi(char **argv)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 1;
	neg = 1;
	if (argv[1][i] == '-')
	{
		neg = -1;
		i++;
	}
	while (argv[1][i])
	{
		nb = nb * 10 + (argv[1][i] - 48);
		i++;
	}
	printf("atoi = %d\n", nb * neg);
	return(nb * neg);
}

int main(int argc, char **argv)
{
	int digit;
	int res_atoi;
	
	digit = check_digit(&argv[1]);
	printf("digit = %d\n", digit);

	if (argc == 2 && digit == 1)
	{
		res_atoi = atoi(&argv[1]);
		ft_thousand(res_atoi);
	}
		
	return(0);
}