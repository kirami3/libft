/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:48:32 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:48:33 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mas;
	unsigned char	ch;

	mas = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n)
	{
		*mas++ = ch;
		n--;
	}
	return (s);
}
