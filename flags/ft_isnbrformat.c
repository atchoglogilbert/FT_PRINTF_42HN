/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbrformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:34:16 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 09:52:40 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnbrformat(char c)
{
	if (c == 'd' || c == 'i' || c == 'x' || c == 'X' || c == 'p' || c == 'u')
		return (1);
	else
		return (0);
}
