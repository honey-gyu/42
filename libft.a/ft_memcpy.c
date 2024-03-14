/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:37:24 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/14 20:38:22 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*str;
	size_t			i;

	temp = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = str[i];
		i++;
	}
	return (temp);
}

int	main(void)
{
	char s1[] = "";
	char s2[] = "";
	printf("%s", (char *)ft_memcpy(s1, s2, 5 * sizeof(char)));
}

/*
int	main(void)
{
	char s1[] = "hello world";
	char s2[40];
	char s3[40];

	printf("%s\n", (char *)ft_memcpy(s2, s1, 7*sizeof(char) + 1));
	printf("%s\n", (char *)ft_memcpy(s3, s1, 7*sizeof(char)));
}*/
