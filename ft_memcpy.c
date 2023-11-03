/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:39 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/02 23:23:04 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_b;
	unsigned char	*src_b;

	dest_b = (unsigned char *)dest;
	src_b = (unsigned char *)src;
	while (n--)
		*dest_b++ = *src_b++;
	return (dest);
}

int	main(void)
{
	char	source[10]="I'm source";
	char	dest_a[10]="0000000000";

	printf("This is the destination: %s\n", dest_a);
	ft_memcpy(&dest_a, &source, 10);
	printf("I'm destination after: %s\n", dest_a);
	return (0);
}

//DESCRIPTION
//The  memcpy() function copies n bytes from memory area src to memory areadest.
//The memory areas must not overlap.
//Use memmove(3) if  the  memory areas do overlap.
//
