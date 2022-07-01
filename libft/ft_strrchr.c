/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:32:20 by khle              #+#    #+#             */
/*   Updated: 2022/05/04 17:41:08 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

/*#include<stdio.h>
#include<string.h>

int main()
{
   //initialize char pointer str
   const char *str = "Learn c from trytoprogram.com";

   int ch = 'c'; //character for searching in str

   printf("str = %s\n\n", str);
   printf("searching character ch = %c\n\n", ch);

   printf("Last occurrence of '%c' in str is = %s\n", ch, ft_strrchr( str, ch));

   return 0;
}
*/