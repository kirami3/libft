/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:47:54 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:47:56 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	ch;

	st = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*st == ch)
			return (st);
		st++;
	}
	return (NULL);
}
