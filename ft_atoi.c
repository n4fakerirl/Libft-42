/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:37:48 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/27 22:49:00 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

// int     main()
// {
//     printf("MY ATOI : %d\n", ft_atoi("  93223"));
//     printf("REAL ATOI : %d\n", atoi("  93223"));
//     printf("MY ATOI : %d\n", ft_atoi("  -0"));
//     printf("REAL ATOI : %d\n", atoi("  -0"));
//     printf("MY ATOI : %d\n", ft_atoi("-42"));
//     printf("REAL ATOI : %d\n", atoi("-42"));
//     printf("MY ATOI : %d\n", ft_atoi("42"));
//     printf("REAL ATOI : %d\n", atoi("42"));
//     printf("MY ATOI : %d\n", ft_atoi("  -+-45"));
//     printf("REAL ATOI : %d\n", atoi("  -+-45"));
//     printf("MY ATOI : %d\n", ft_atoi("1337abf89"));
//     printf("REAL ATOI : %d\n", atoi("1337abf89"));
//     printf("MY ATOI : %d\n", ft_atoi("2147483647"));
//     printf("REAL ATOI : %d\n", atoi("2147483647"));
//     printf("MY ATOI : %d\n", ft_atoi("2147483648"));
//     printf("REAL ATOI : %d\n", atoi("2147483648"));
// }