/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:37 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/17 13:46:53 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*ptr;

	sub_str = (char *)malloc(len + 1);
	ptr = sub_str;
	if (!sub_str)
		return (NULL);
	while (len)
	{
		*sub_str++ = s[start++];
		len--;
	}
	return (ptr);
}

//int	main(void)
//{
//	const char	*str;
//	char		*ns;
//
//	str = "0123456789";
//	ns = ft_substr(str, 5, 5);
//	printf("The substring is: %s\n", ns);
//	return (0);
//}
