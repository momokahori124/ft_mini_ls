/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momoka <momoka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:04:12 by momoka            #+#    #+#             */
/*   Updated: 2020/12/03 21:04:13 by momoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long long		ft_min(long long a, long long b)
{
	if (a > b)
		return (b);
	return (a);
}
