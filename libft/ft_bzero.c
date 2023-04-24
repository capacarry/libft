/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:53:43 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/19 13:13:27 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
}

// int main()
// {
//     char str[30] = "abcd";
//     ft_bzero(str,2);
//     return(0);
// }