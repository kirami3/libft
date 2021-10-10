/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:49:00 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:49:02 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	c;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		c = (unsigned int)n * -1;
	}
	else
		c = (unsigned int)n;
	if (c >= 10)
		ft_putnbr_fd(c / 10, fd);
	ft_putchar_fd((char)(c % 10 + 48), fd);
}	
