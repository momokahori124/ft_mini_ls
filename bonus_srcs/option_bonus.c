/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:59:06 by momoka            #+#    #+#             */
/*   Updated: 2020/12/04 23:09:29 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head.h"

void	ft_put_dirname(char *dirname, char *inner_dirname, t_input input)
{
	struct stat		buf;
	char			*path;

	if (input.option[key('G')] != 1)
		return (ft_printf_s("%\n", 0, inner_dirname));
	if (dirname[0] == '.' && dirname[1] != '/')
		path = ft_strdup(inner_dirname);
	else
		path = ft_strjoin3(dirname, inner_dirname);
	if (lstat(path, &buf) != 0)
		return ;
	if (S_ISDIR(buf.st_mode))
		putstr_blue(inner_dirname);
	else if (S_ISLNK(buf.st_mode))
		putstr_magent(inner_dirname);
	else if (buf.st_mode & S_IXUSR)
		putstr_red(inner_dirname);
	else if (S_ISCHR(buf.st_mode))
		putstr_blue_back_yellow(inner_dirname);
	else if (S_ISBLK(buf.st_mode))
		putstr_blue_back_cyaan(inner_dirname);
	else
		ft_printf_s("%\n", 0, inner_dirname);
	free(path);
}
