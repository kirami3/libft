/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:50:26 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:50:27 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*r;
	unsigned char	*t;

	i = 0;
	r = (unsigned char *)s1;
	t = (unsigned char *)s2;
	while (n-- && (r[i] || t[i]))
	{
		if (r[i] != t[i])
			return (r[i] - t[i]);
		i++;
	}
	return (0);
}
