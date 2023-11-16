/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:01:39 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/16 21:24:29 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	alloc_size;
	void	*allocated_memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc_size = nmemb * size;
	if (alloc_size / nmemb != size)
		return (NULL);
	allocated_memory = malloc(alloc_size);
	if (allocated_memory != NULL)
		ft_memset(allocated_memory, 0, alloc_size);
	return (allocated_memory);
}

//int	main(void)
//{
//	int		*array;
//	int		*array1;
//	size_t	i;
//	size_t	size;
//
//	size = 20;
//	array = (int *)ft_calloc(size, sizeof(int));
//	array1 = (int *)calloc(size, sizeof(int));
//	i = 0;
//	if (array1 != NULL || array != NULL)
//	{
//		printf("This is FT: \n");
//		while (i < size)
//			printf("%d", array[i++]);
//		i = 0;
//		printf("\nThis is C:\n");
//		while (i < size)
//			printf("%d", array1[i++]);
//		free(array);
//	}
//	else
//		printf("Error: It can't allocate memory\n'");
//	return (0);
//}
