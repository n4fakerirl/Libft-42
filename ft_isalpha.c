/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:17:43 by ocviller          #+#    #+#             */
/*   Updated: 2025/04/27 17:48:04 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("test : %d\n", ft_isalpha('a'));
    printf("test : %d\n", ft_isalpha('N'));
    printf("test : %d\n", ft_isalpha('0'));
    printf("test : %d\n", ft_isalpha('.'));
    printf("test 2 : %d\n", isalpha('a'));
    printf("test 2 : %d\n", isalpha('N'));
    printf("test 2 : %d\n", isalpha('0'));
    printf("test 2 : %d\n", isalpha('.'));
}*/
