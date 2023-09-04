/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:09:39 by jsage             #+#    #+#             */
/*   Updated: 2023/09/04 19:34:43 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *str = "Test";

// 	int a = ft_strlen(str);
// 	int b = strlen(str);

// 	printf("%d\n", a); 
// 	printf("%d\n", b); 
// }