/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:57:10 by etaquet           #+#    #+#             */
/*   Updated: 2025/08/29 16:25:31 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

extern unsigned long ft_strlen(const char *__s);

extern ssize_t ft_write(int __fd, const void *__buf, size_t __n);

extern ssize_t ft_read(int __fd, void *__buf, size_t __nbytes);

extern int ft_strcmp(const char *__s1, const char *__s2);

extern char *ft_strcpy(char *restrict __dest, const char *restrict __src);

extern char *ft_strdup(const char *__s);

int main(void)
{
    char rt[4096];

    printf("%lu\n", strlen("Hello"));
    printf("%lu\n", ft_strlen("Hello"));
    ft_write(1, "Hello\n", 6);
    printf("%d\n", strcmp("H0llo", "Hallo"));
    printf("%d\n", ft_strcmp("H0llo", "Hallo"));
    printf("%d\n", strcmp("Hi", "Hi"));
    printf("%d\n", ft_strcmp("Hi", "Hi"));
    char *rt2 = ft_strcpy(rt, "Hello World!");
    char *rt3 = strcpy(rt, "Hello World!!");
    printf("%s, %s, %s\n", rt, rt2, rt3);
    rt2 = ft_strdup("Hello");
    rt3 = strdup("Hello2");
    printf("%s, %s, %s\n", rt, rt2, rt3);

    int value = 0;
    write(-1, "Hello\n", 6);
    printf("errno = %d\n", errno);
    ft_write(-1, "Hello\n", 6);
    printf("errno = %d\n", errno);
    ft_read(-1, rt, 6);
    printf("errno = %d\n", errno);
    read(-1, rt, 6);
    printf("errno = %d\n", errno);
    free(rt2);
    free(rt3);
}