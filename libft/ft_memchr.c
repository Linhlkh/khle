/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:42:45 by khle              #+#    #+#             */
/*   Updated: 2022/05/06 16:05:13 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(char *)(str + i)) == (char)x)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/*#include<stdio.h>
int main()
{
	const char str[50] = "123456789";
	char c = '5';
	printf("%s", (char *) ft_memchr(str,c,8));
}*/
