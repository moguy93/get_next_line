/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:47:21 by moguy             #+#    #+#             */
/*   Updated: 2018/11/24 15:16:48 by moguy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cp;
	int		i;
	char	*j;

	cp = (char*)s;
	i = 0;
	j = NULL;
	while (cp[i])
	{
		if (cp[i] == c)
			j = (&cp[i]);
		i++;
	}
	if (c == cp[i])
		return (&cp[i]);
	return (j);
}
