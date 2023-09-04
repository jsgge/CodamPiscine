/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:20:32 by jsage             #+#    #+#             */
/*   Updated: 2023/09/04 12:22:30 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *s1 = "hello lol";
// 	char *s2 = "hEllo lfw";

// 	ft_strcmp(s1, s2);
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s2));
// }

// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare the 
// 	 null-terminated strings s1 and s2.

// RETURN VALUES
//      The strcmp() and strncmp() functions return an integer greater than, 
// 	 equal to, or less than 0, according as the string s1 is greater than, 
// 	 equal to, or less than the string s2.  