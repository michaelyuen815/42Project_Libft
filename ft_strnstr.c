/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 21:07:32 by chyuen            #+#    #+#             */
/*   Updated: 2019/04/29 21:21:38 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if ((!len || !haystack) && !*needle)
		return ((char*)haystack);
	while (*haystack && len-- > 0)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i] && i <= len)
			i++;
		if (!needle[i])
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
