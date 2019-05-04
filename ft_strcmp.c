/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:23:17 by chyuen            #+#    #+#             */
/*   Updated: 2019/04/29 15:31:24 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	while (*us1 && *us1 == *us2)
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}
