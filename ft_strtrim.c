/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:19:34 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/17 21:19:44 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start; //almacenar la posicion comienzo subcadena
	size_t	end; // almacena posicio fin subcadena
	size_t	len_s1; //almacena largo de s1
	size_t	len_set; //almacena largo de `set`

	//comprobar que sean cadenas validas
	if(!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);

	//verificar si comienzo match con algun `set`
	start = 0;
	while (*s1)
	{
		*s1++;
		start++;
	}
	//verificar si final match con algun `set`


	return (ptr);
}

int	main(void)
{
	const char	*src;
	const char	*trim;
	char *trimmed;

	src = "++-Hola----";
	trim = "+-";
	trimmed = ft_strtrim(src, trim);
	printf("The trimmed: %s\n", trimmed);
	free(trimmed);
	return (0);
}

//check si s1 es NULL si true -> return NULL
//check si al comienzo de `s1` algun char match con algun char en `set`
//cada vez que match aumentar una variable que indicara el principio de la subcadena trimmed
//si no match es el principio de la subcadena.
//check desde el final de `s1` si algun char match con alguno de `set
//si es asi ir reduciendo un variable hast con seguir el diferente
//este indicara el final de la subcadena strimmed.
//crear la nueva cadena con malloc usando el largo de la subcadena encontrada
//verificar si hay espacio para alojar la nueva cadena, sino devolver NULL
//retornar el puntero a la nueva cadena.

