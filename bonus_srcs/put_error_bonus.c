/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:54:58 by mhori             #+#    #+#             */
/*   Updated: 2020/12/04 20:56:03 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head.h"

int	put_error_message(char *error_message, size_t len)
{
	write(2, error_message, len);
	return (ERROR_RETURN);
}

int	perror_message(char *error_message)
{
	perror(error_message);
	return (ERROR_RETURN);
}

int	perror_message_free(char ***ptr, char *error_message)
{
	array_free_2d((void ***)ptr, count_2d(*ptr) + 1);
	return (perror_message(error_message));
}
