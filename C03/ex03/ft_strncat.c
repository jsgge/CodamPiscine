/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:20:51 by jsage             #+#    #+#             */
/*   Updated: 2023/09/03 17:30:24 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	u;

	i = 0;
	u = 0;
	while (dest[i] != '\0')
		i++;
	while (src[u] != '\0' && u < nb)
	{
		dest[i] = src[u];
		i++;
		u++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char dest[] = "s1";
// 	char src[] = "s2 test string";
// 	unsigned int nb = 5;

// 	ft_strncat(dest, src, nb);
// 	printf("%s", dest);
// }

// DESCRIPTION
//      The strcat() and strncat() functions append a copy 
// of the null-terminated string s2 to the end of 
// the null-terminated string s1, then add a terminating `\0'.  
// The string s1 must have sufficient space to hold the result.

//      The strncat() function appends not more than n characters from s2, 
// and then adds a terminating `\0'.

//      The source and destination strings should not overlap, 
// as the behavior is undefined.

// RETURN VALUES
//      The strcat() and strncat() functions return the pointer s1.