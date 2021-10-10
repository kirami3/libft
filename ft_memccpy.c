/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:54:44 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:54:45 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	i;
	int				j;

	j = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = (unsigned char)c;
	while (n--)
	{
		d[j] = s[j];
		j++;
		if (s[j - 1] == i)
			return (&d[j]);
	}
	return (NULL);
}
