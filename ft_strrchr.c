/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:07:57 by daspring          #+#    #+#             */
/*   Updated: 2024/08/09 12:14:59 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*haystack;
	char	needle;
	int		pos;

	haystack = (char *)s;
	needle = (char) c;
	pos = ft_strlen(haystack);
	while (pos >= 0)
	{
		if (haystack[pos] == needle)
			return (haystack + pos);
		pos--;
	}
	return (0);
}
