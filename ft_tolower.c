/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:02:53 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/05 04:10:18 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if(c >= 'A' && c <= 'a')
		return (c + 32);
	else
		return (c);

}

int	main(void)
{
	char upper = 'B';
	char low = ft_tolower(upper);
	printf("%c\n", low);
	return (0);
}
