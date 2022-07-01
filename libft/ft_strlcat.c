/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:18:49 by khle              #+#    #+#             */
/*   Updated: 2022/05/06 15:41:18 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_sz;
	size_t	src_sz;
	size_t	i;
	size_t	j;

	dest_sz = ft_strlen(dest);
	src_sz = ft_strlen(src);
	i = 0;
	j = dest_sz;
	if (j >= n)
	{
		dest_sz = n;
	}
	if (j < n -1 && n > 0)
	{
		while (src[i] && dest_sz + i < n - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	return (dest_sz + src_sz);
}
/*#include<stdio.h>
int main()
{
	char dest[50]= "haha";
	char	src[50]= "12345";
	printf("%ld", ft_strlcat(dest, src, 2));
	ft_strlcat(dest, src, 7);
	//printf("%s", dest);
}*/