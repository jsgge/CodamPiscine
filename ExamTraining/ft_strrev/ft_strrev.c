/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:18:02 by jsage             #+#    #+#             */
/*   Updated: 2023/09/05 16:27:52 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}	
	return (i);
}	

char    *ft_strrev(char *str)
{
	int i;
	int j = 0;
	char dest[100];
	
	i = ft_strlen(str) - 1;

	while (str[i])
	{
		dest[j] = str[i];
		j++;
		i--;
	}
	dest[j] = '\0';
	return(dest);
	
}

int main()
{
	char *s;
	
	s = ft_strrev("test");
	printf("%s", s);
}



// char *ft_strrev(char *str)
// {
// 	int i = -1;
// 	int length = 0;
// 	char temporary;

// 	while (str[length])
// 		length++;
// 	while (++i < length / 2)
// 	{
// 		temporary = str[i];
// 		str[i] = str[length - 1 - i];
// 		str[length - 1 - i] = temporary;
// 	}
// 	return (str);
// }