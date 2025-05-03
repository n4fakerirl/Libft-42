/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:21:29 by ocviller          #+#    #+#             */
/*   Updated: 2025/05/03 15:16:44 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		y = 0;
		while (haystack[y + i] && needle[y] && haystack[y + i] == needle[y]
			&& (i + y) < len)
			y++;
		if (needle[y] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
