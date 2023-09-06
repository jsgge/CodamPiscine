/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:59:50 by jsage             #+#    #+#             */
/*   Updated: 2023/09/05 15:29:40 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turn-in directory : ex02/
// Files to turn in : ft_putnbr.c
// Allowed functions : write
// • Create a function that displays the number entered as a parameter. The function
// has to be able to display all possible values within an int type variable.
// • Here’s how it should be prototyped :
// void ft_putnbr(int nb);
// • For example:
// ◦ ft_putnbr(42) displays "42"


#include <unistd.h>
#include <limits.h>

void putnb(int nb)
{
	char c;
	
	c = nb + '0';
	write(1, &c, 1);
}
	
void putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 10)
	{
		putnbr(nb / 10);
	}
	putnb(nb % 10);
}

int main()
{
	putnbr(-888);
}