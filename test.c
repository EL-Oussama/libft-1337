#include "libc.h"

int main()
{
    char c[] ="hello";
    char d[18] = "hello";
    printf("hellohell=%s \t 10 | %lu\n",d,ft_strlcat(d,c,5));

    char c2[] ="";
    char d2[5] ="HHH";
    printf(" 'HHH'=%s \t 3 | %lu\n",d2, ft_strlcat(d2,c2,5));

    char * c3 = NULL;
    char d3[5];
   // printf(" ' '=%s \t 0 | %lu\n",d3, ft_strlcat(d3,c3,5)); /*segmentation fault*/

    char * c4 = "hello";
    char *d4 = NULL;
    //printf(" ' '=%s \t 0 | %lu\n",d4, ft_strlcat(d4,c4,10)); 

      char * c5 = NULL;
    char* d5 = NULL;
   //printf(" ' '=%s \t 0 | %lu\n",d5, ft_strlcat(d5,c5,5)); /*SEGMENTATION FAULT*/

    char * c6 = "\0";
    char d6[5];
    //printf(" ' '=%s \t 0 | %lu\n",d6, ft_strlcat(d6,c6,5)); 

    char * c8 = "HELLO";
    char *d8 = NULL;
    //printf(" 'HELLO'=%s \t 5 | %lu\n",d8, ft_strlcat(d8,c8,8)); /*segmentation fault*/
    
    char * c7 = "HELLO";
    char d7[10];
    //printf(" 'HELLO'=%s \t 5 | %lu\n",d7,  ft_strlcat(d7,c7,8));

    
}
