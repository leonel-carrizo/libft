/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:36:07 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/24 20:29:42 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_str(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*new_str(int len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*result;
	long long	num;
	int			len;

	len = len_str(n);
	result = new_str(len);
	if (!result)
		return (NULL);
	if (n == 0)
		return ("0");
	num = n;
	if (n < 0)
	{
		*result = '-';
		num *= -1;
	}
	result[len + 1] = '\0';
	while (len-- && num)
	{
		result[len] = num % 10 + '0';
		num /= 10;
	}
	return (result);
}

//int	main(void)
//{
//	char	*str;
//
//	str = ft_itoa(2147483647);
//	printf("MIN %s\n", str);
//	str = ft_itoa(-2147483648);
//	printf("MAX %s\n", str);
//	str = ft_itoa(0);
//	printf("0= %s\n", str);
//	str = ft_itoa('\0');
//	printf("NULL= %s\n", str);
//	return (0);
//}
