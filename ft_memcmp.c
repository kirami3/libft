/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:48:03 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:48:05 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t k)
{
	unsigned char	*m;
	unsigned char	*n;

	m = (unsigned char *)s1;
	n = (unsigned char *)s2;
	while (k--)
	{
		if (*m != *n)
			return (*m -*n);
		m++;
		n++;
	}
	return (0);
}
