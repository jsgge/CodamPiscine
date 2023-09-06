/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:50:02 by jsage             #+#    #+#             */
/*   Updated: 2023/09/05 12:48:45 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h>

void repeat(char *str)
{
	int i;
	int j;
	int rep;

	j = 0;
	while (str[j])
	{
		rep = 1;
		i = 0;

		if (str[j] <= 'z' && str[j] >= 'a')
		{
			rep = str[j] - 'a' + 1;
		}
		if (str[j] <= 'Z' && str[j] >= 'A')
		{  
			rep = str[j] - 'A' + 1;
		}
		while (i < rep)
		{
			write (1, &str[j], 1);
			i++;
		}
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat(argv[1]);
	write(1, "\n", 1);
	return(0);
}








// #include <unistd.h>

// int		main(int argc, char *argv[])
// {
// 	int		i;
// 	int		repeat;

// 	if (argc == 2)
// 	{
// 		while (*argv[1])
// 		{
// 			i = 0;
// 			repeat = 1;
// 			if (*argv[1] >= 'a' && *argv[1] <= 'z')
// 				repeat = *argv[1] - 'a' + 1;
// 			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
// 				repeat = *argv[1] - 'A' + 1;
// 			while (i < repeat)
// 			{
// 				write(1, &(*argv[1]), 1);
// 				i++;
// 			}
// 			argv[1]++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }