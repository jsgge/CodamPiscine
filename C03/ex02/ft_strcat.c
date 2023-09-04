/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:20:45 by jsage             #+#    #+#             */
/*   Updated: 2023/08/31 12:39:36 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (dest[i] != '\0')
		i++;
	while (src[u] != '\0')
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
// 	char src[] = "s2";

// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// }

// DESCRIPTION
//      The strcat() and strncat() functions append a copy 
// of the null-terminated string s2 to the end of 
// the null-terminated string s1, then add a terminating `\0'.
// The string s1 must have sufficient space to hold the result.

//      The source and destination strings should not overlap, 
// as the behavior is undefined.

// RETURN VALUES
//      The strcat() and strncat() functions return the pointer s1.