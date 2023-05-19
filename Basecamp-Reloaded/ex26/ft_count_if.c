/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:11:46 by evportel          #+#    #+#             */
/*   Updated: 2023/04/25 16:12:39 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
		{
			count++;
		}
		tab++;
	}
	return (count);
}