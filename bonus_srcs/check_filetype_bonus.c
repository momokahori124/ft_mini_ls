/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_filetype_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:58:05 by momoka            #+#    #+#             */
/*   Updated: 2020/12/04 21:45:13 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head.h"

int		is_directory(char *dirname, char *inner_dirname)
{
	struct stat		buf;
	char			*path;

	if (dirname[0] == '.' && dirname[1] != '/')
		path = ft_strdup(inner_dirname);
	else
		path = ft_strjoin3(dirname, inner_dirname);
	if (lstat(path, &buf) != 0)
	{
		perror("lstat fail");
		exit(0);
	}
	free(path);
	return (S_ISDIR(buf.st_mode));
}

int		is_regfile(char *dirname, char *inner_dirname)
{
	struct stat		buf;
	char			*path;

	if (dirname[0] == '.' && dirname[1] != '/')
		path = ft_strdup(inner_dirname);
	else
		path = ft_strjoin3(dirname, inner_dirname);
	if (lstat(path, &buf) != 0)
	{
		perror("lstat fail");
		exit(0);
	}
	free(path);
	return (S_ISREG(buf.st_mode));
}
