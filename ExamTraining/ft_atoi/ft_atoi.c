/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:08:57 by jsage             #+#    #+#             */
/*   Updated: 2023/09/05 14:26:02 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 1;
	nb = 0;
	while(str[i])
	{
		while (str[i] <= 32 || str[i] == 127)
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-' )
		{
			neg = neg * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10 + (str[i] - 48);
			i++;
		}	
	}
	return (nb*neg);
}

int main()
{
	printf("%d\n", ft_atoi("   ++--6786"));
	return(0);
}