/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isintdecnbrformat.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:52:24 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 10:58:51 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isintdecnbrformat(char c)
{
	if (c == 'd' || c == 'i')
		return (1);
	else
		return (0);
}
