/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:35:49 by khle              #+#    #+#             */
/*   Updated: 2022/05/03 17:44:33 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}

/*
return (str1[i] - str2[i])??
#include <stdio.h>
#include <string.h>
int main()
{
	char c[] = "1bcd";
	char c1[] = "1bcd";
	printf("%i", strncmp(c, c1, 10));
	printf("\n%i",ft_strncmp(c, c1,10));
}*/
