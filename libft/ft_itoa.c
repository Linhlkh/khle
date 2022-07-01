/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:35:40 by khle              #+#    #+#             */
/*   Updated: 2022/05/09 13:35:58 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_neg(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}

int	ft_get_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_get_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	str[i] = 0;
	while (n != 0)
	{
		i--;
		str[i] = ft_get_neg(n % 10) + 48;
		n = n / 10;
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
    int i;
    i = 0;
    printf("%d", ft_get_len(i));
    printf("%s", ft_itoa(i));
}*/
