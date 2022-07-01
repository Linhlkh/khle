/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:37:32 by khle              #+#    #+#             */
/*   Updated: 2022/05/06 14:39:22 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char dest[15000];
   memset(dest, 'x', 5000);
   dest[4999] = 'A';
   printf("%c\n", dest[4999]);
   ft_memmove1(dest+4000, dest, 7000);
   printf("%c\n", dest[8999]);
   
   const char src[]  = "abcd";

   ft_memmove(dest, src,2);
   printf("After memmove dest = %s, src = %s\n\n", dest, src);

   char dest1[] = "12345";
   const char src1[]  = "abcd";

   ft_memmove1(dest1, src1,2);
   printf("Func1\nAfter memmove dest1 = %s, src1 = %s\n\n", dest1, src1);

	char dest2[] = "12345";
   const char src2[]  = "abcd";

   memmove(dest2, src2,2);
   printf("func original\nAfter memmove dest2 = %s, src2 = %s\n", dest2, src2);

   return(0);
   */