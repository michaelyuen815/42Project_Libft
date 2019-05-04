/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:29:14 by chyuen            #+#    #+#             */
/*   Updated: 2019/05/02 21:46:06 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strwolsp(char const *s)
{
	size_t len;

	if (!*s)
		return (0);
	len = ft_strlen(s);
	while (*s)
		s++;
	--s;
	while (BL_WSP(*s))
	{
		len--;
		s--;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	if (!s)
		return (NULL);
	while (*s && BL_WSP(*s))
		s++;
	return (ft_strsub(s, 0, ft_strwolsp(s)));
}
