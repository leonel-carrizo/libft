/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:20:50 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:18:13 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if(c >= 'a' && c <='z')
		return c - 32;
	else
		return (c);
}

//int	main(void)
//{
//	char lowercase = 'q';
//	char uppercase = ft_toupper(lowercase);
//	printf("%c\n", uppercase);
//	return (0);
//}
