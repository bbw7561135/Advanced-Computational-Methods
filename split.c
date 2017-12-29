/**************************************************/
/**************************************************/
/*
 * N. W. Bressloff 8th December 2017
 *
 *  Using pointers to efficiently manipulate strings
 * 
 */
/**************************************************/
/**************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char line[80], title[20];
    char *first_ptr;
    char *last_ptr;
    char *newName;

    /* ask for title */
    printf("\nEnter title\n");
    (void)fgets(title, sizeof(title), stdin);

    /* ask for surname and first name with a given syntax */
    printf("\nEnter name as surname/first name\n");
    (void)fgets(line, sizeof(line), stdin);

    /* add null character to the end of the array */
    line[strlen(line)-1] = '\0';
    last_ptr = line;

    /* point the pointer to the first / */
    first_ptr = strchr(line, '/');

    if( first_ptr == NULL )
    {
        printf("Error: unable to find slash in %s\n", line);
        exit(8);
    }

    /* set the / to an \0, as to split up first name and last name */
    *first_ptr = '\0';

    /* increment the first pointer, so it points to the next character */
    first_ptr++;

    /* change the letters to capital letters, if they are lowercase */  
    if (*last_ptr >= 'a' && *last_ptr <= 'z'){
        *last_ptr = *last_ptr  - 32; 
    }
    if (*first_ptr >= 'a' && *first_ptr <= 'z'){
        *first_ptr = *first_ptr  - 32; 
    }
    if (*title >= 'a' && *title <= 'z'){
        *title = *title  - 32; 
    }

    /* join everything together */
    title[strlen(title)-1] = ' ';
    strcpy(newName, title);
    strcat(first_ptr, " ");
    strcat(newName, first_ptr);
    strcat(newName, last_ptr);
    (void)printf("\nFull name is: %s\n", newName);

    return 0;
}