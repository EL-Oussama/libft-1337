/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:12:19 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 21:12:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countword(char * str, char sep)
{
    int i;
    int countw;

    i = 0;
    countw = 0;
    while(str[i])
    {
        if((str[i] != sep && str[i + 1] == sep) || (str[i] != sep && str[i + 1] == '\0'))
            countw++;
        i++;
    }
    return countw;
}
int countwletters(char *str, char sep)
{
    int countlet;

    countlet = 0;
    while(str[countlet] != sep && str[countlet] != '\0')
        countlet++;
    return countlet;
}

void *ft_free(char **tab,int words)
{
    int i;

    i = 0;
    while(i <= words)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (NULL);
}

char *fill_word(char *s, char *str, char sep)
{
    int i;
    char *tab;

    i = 0;
    tab = (char *) ft_calloc(countwletters(str, sep) + 1, sizeof(char));
    if(!tab)
        return (NULL);
    while( i < countwletters(str,sep))
    {
        tab[i] = str[i];
        i++;
    }
    return tab;
}

char **ft_split(char const *s, char c)
{
    char **tab;
    int i;
    int y;

    i = 0;
    tab = (char **) ft_calloc(countword((char *)s,c) + 1,sizeof(char *));
    if(!tab)
        return NULL;
    y = 0;
    while(s[i])
    {
        if(s[i] != c)
        {
            tab[y] = fill_word((char *)s,(char *)&s[i],c);
            if(!tab[y])
                return(ft_free(tab,countword((char *)s,c)));
            i = i + countwletters((char*)&s[i],c);
            y++;
        }
        else
            i++;
    }
    return tab;
}

int main()
{
   char **tab =ft_split("           hello    world  my       name   is oussama      ", ' ');
   int i = 0;
   while(tab[i])
   {
    printf("%s-------------\n",tab[i]);
    i++;
   }
}