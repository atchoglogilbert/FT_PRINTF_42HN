/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:35:42 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/29 22:21:24 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isstrformat(char c)
{
	if (c == 's' || c == 'c')
		return (1);
	else
		return (0);
}