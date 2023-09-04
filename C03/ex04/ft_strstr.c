/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:29:44 by jsage             #+#    #+#             */
/*   Updated: 2023/09/03 15:36:28 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char	str[] = "\n";
// 	char	to_find[] = "\n"; 

// 	char *ptr = ft_strstr(str, to_find); 
// 	char *ptr2 = strstr(str, to_find); 

// 	printf("%s\n", ptr);
// 	printf("%s\n", ptr2);
// }

// DESCRIPTION
//      The strstr() function locates the first occurrence 
// 	 of the null-terminated string to_find 
// 	 in the null-terminated string str.

// RETURN VALUES
//      If to_find is an empty string, str is returned; 
// 	 if to_find occurs nowhere in str, 
// 	 NULL is returned; otherwise a pointer to 
// 	 the first character of the first
//      occurrence of to_find is returned.