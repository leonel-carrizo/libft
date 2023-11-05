/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:58:24 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/05 06:34:43 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*found;

	found = NULL;
	while (*s++)
		if (*s == c)
			found = s;
	return ((char *)found);
}

int	main(void)
{
	char	x[] = "Mejor y Mas Mundo!";

	printf("This ft: --%s--\n", ft_strrchr(x, 'M'));
	printf("this is C: -%s-\n", strrchr(x, 'M'));
	return (0);
}
