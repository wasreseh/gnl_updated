/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasreseh <wasreseh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:05:12 by wasreseh          #+#    #+#             */
/*   Updated: 2023/03/08 23:15:43 by wasreseh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>


int main()
{
    int fd;
    int fd1;
    static char *str;
    static char *str1;
    int i = 0;
    fd = open("example.txt", O_RDONLY);
    fd1 = open("cat.txt", O_RDONLY); 
    if (fd == -1 || fd1 == -1)
        perror("Error While Opening file");
    while (i < 8)
    {
        str = get_next_line(fd);
        str1 = get_next_line(fd1);
        printf("%s", str);
        printf("%s", str1);
        free(str);
        i++; 
    }
    close(fd);
    return (0);
}