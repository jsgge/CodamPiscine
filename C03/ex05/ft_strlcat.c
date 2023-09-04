/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:30:41 by jsage             #+#    #+#             */
/*   Updated: 2023/09/03 15:36:48 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	u;

	i = 0;
	u = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[u] != '\0' && i + 1 < size)
	{
		dest[i] = src[u];
		i++;
		u++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i + u);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char	dest[] = "dest";
// 	char	src[] = "srcccc"; 
// 	unsigned int	size = 5;

// 	int res = ft_strlcat(dest, src, size); 
// 	int res2 = strlcat(dest, src, size); 

// 	printf("%d\n", res);
// 	printf("%d\n", res2);
// }

// DESCRIPTION
//      The strlcat() function copy and concatenate strings 
// 	 with the same input parameters and output result as snprintf(3).  

//      strlcat() take the full size of the destination buffer 
// 	 and guarantee NUL-termination if there is room.  Note that room for 
// 	 the NUL should be included in dstsize.

//      strlcat() appends string src to the end of dst.  It will append at most 
// 	 dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
// 	 dstsize is 0 or the original dst
