/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:57:10 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/05 21:39:52 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(char *str);

int ft_write(int fd, char *str, int size);

int ft_strcmp(char *s1, char *s2);

char *ft_strcpy(char *s1, char *s2);

char *ft_strdup(char *s1);

int main(void)
{
    char rt[4096];

    printf("%lu\n", strlen("Hello"));
    printf("%lu\n", ft_strlen("Hello"));
    ft_write(1, "Hello\n", 6);
    printf("%d\n", strcmp("H0llo", "Hallo"));
    printf("%d\n", ft_strcmp("Hallo", "Hello"));
    char *rt2 = ft_strcpy(rt, "Hello World");
    printf("%s %p %p\n", rt, rt, rt2);
    rt2 = ft_strdup("Hello");
    printf("%s %p %p\n", rt2, rt, rt2);
}