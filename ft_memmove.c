/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:58:38 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:50:27 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (d < s && s + n > d)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

//int	main(void)
//{
//	char	origen[10] = "holaMundo";
//	char	destino[10] = "0000";
//
//	ft_memmove(destino, origen, 5);
//	printf("Destination with ft_ = %s\n", destino);
//	memmove(destino, origen, 5);
//	printf("Destination with string.h = %s\n", destino);
//	return (0);
//}
//
//DESCRIPCIÓN
//La función memmove() copia n bytes del área de memoria src 
//al área de memoria dest.  
//Las áreas de memoria pueden solaparse.
//VALOR DEVUELTO
//La función memmove() devuelve un puntero a dest.
//
//DESCRIPTION
//The memmove() function copies n bytes from memory area src 
//to memory area dest.
//The  memory  areas may overlap: copying takes place as though the bytes 
//in src are first copied into a temporary array 
//that does not  overlap  src  or dest, 
//and the bytes are then copied from the temporary array to dest.
//RETURN VALUE
// The memmove() function returns a pointer to dest.
