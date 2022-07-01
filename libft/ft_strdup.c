/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:29:56 by khle              #+#    #+#             */
/*   Updated: 2022/05/07 18:12:29 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	size_t	i;

	i = 0;
	str2 = (char *)malloc(sizeof (*str1) * (ft_strlen(str1) + 1));
	if (!str2)
		return (NULL);
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}
/*#include<stdio.h>
int main()
{
	char	c[50]="little do you know";
	printf("%s", ft_strdup(c));
}*/
