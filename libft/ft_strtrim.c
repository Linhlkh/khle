/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:14:42 by khle              #+#    #+#             */
/*   Updated: 2022/05/07 19:15:07 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	while (s1[i] && ft_check_inset(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_check_inset(s1[j - 1], set))
		j--;
	str = (char *)malloc(sizeof(*s1) * (j - i + 1));
	if (!str)
		return (NULL);
	while (k < (j - i))
	{
		str[k] = s1[i + k];
		k++;
	}
	str[k] = 0;
	return (str);
}

/*#include<stdio.h>
int main()
{
    char c[50] = "o";
    char set[3] = "bo";
    //ft_strtrim(c, set);
    printf("%s",ft_strtrim(c, set) );
}
*/
