/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:01:16 by khle              #+#    #+#             */
/*   Updated: 2022/05/09 22:01:31 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)n;
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
/*
write(fd,&(nb % 10 + '0'), 1);
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int	fd;
	fd = open("./test.txt", O_CREAT | O_RDWR | O_TRUNC, 0777);
	printf("%d\n",fd);
	ft_putnbr_fd(-2147483648, fd); 

}*/
