/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:38:46 by chyuen            #+#    #+#             */
/*   Updated: 2019/04/30 13:43:05 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ch_b;

	ch_b = (unsigned char *)b;
	while (len--)
		*ch_b++ = (unsigned char)c;
	return (b);
}
