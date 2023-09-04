/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:20:38 by jsage             #+#    #+#             */
/*   Updated: 2023/09/04 15:26:23 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *s1 = "dd00000ff444";
// 	char *s2 = "dd345345";
// 	unsigned int n = 4;

// 	ft_strncmp(s1, s2, n);
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// }

// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare 
// 		the null-terminated strings s1 and s2.

//      The strncmp() function compares not more than n characters.  

// RETURN VALUES
//      The strcmp() and strncmp() functions return an integer greater than, 
// 	 equal to, or less than 0, according as the string s1 is greater than, 
// 	 equal to, or less than the string s2.  
// 	 The comparison is done using unsigned characters, so that `\200' 
//   is greater than `\0'.