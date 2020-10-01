/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atron <atron@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:37:11 by atron             #+#    #+#             */
/*   Updated: 2020/09/26 16:01:15 by atron            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*readfile(char *filepath)
{
	char	*buf;
	int		fd;

	buf = (char*)malloc(1000 * sizeof(char));
	if ((fd = open(filepath, O_RDONLY | O_SHLOCK)) == -1)
	{
		write(1, "Failed to open!\n", 17);
		return (NULL);
	}
	write(1, "Success to open!\n", 18);
	read(fd, buf, 1000);
	close(fd);
	return (buf);
}
