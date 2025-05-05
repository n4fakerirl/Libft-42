/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:13:04 by ocviller          #+#    #+#             */
/*   Updated: 2025/05/05 20:48:05 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char s, char c)
{
	if (s == c)
		return (1);
	else
		return (0);
}

int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (i > 0 && check_sep(s[i - 1], c) && !check_sep(s[i], c))
			count++;
		i++;
	}
	return (count);
}

int	ft_allocate(char **str, const char *s, int y, int len)
{
	int	i;

	i = 0;
	str[y] = malloc(sizeof(char) * (len + 1));
	if (!str[y])
	{
		while (y >= 0)
			free(str[y--]);
		return (0);
	}
	ft_strlcpy(str[y], s, len + 1);
	y++;
	return (y);
}

char	**ft_split2(void)
{
	char	**str;

	str = malloc(sizeof(char *) * 1);
	if (!str)
		return (NULL);
	str[0] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		y;
	int		len;
	char	**str;

	i = 0;
	y = 0;
	if (s[0] == '\0')
		return (ft_split2());
	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		len = 0;
		while (s[i + len] && check_sep(s[len + i], c))
			i++;
		while (s[i + len] && !check_sep(s[len + i], c))
			len++;
		if (len > 0)
			y = ft_allocate(str, s + i, y, len);
		i = i + len;
	}
	str[y] = NULL;
	return (str);
}
