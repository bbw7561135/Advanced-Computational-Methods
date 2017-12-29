#include <stdio.h>

//void MyStrCat(char, char);
void PtrStrCat(char*, char*);

int main(void)
{
    char s1[15] = "Hello";
    char s2[15] = "World";

    char s3[100] = "Hello";
    char s4[100] = "World";

    printf("Original strings:\ns1 = %s, s2 = %s\n", s3, s4);
    //printf("Concatenated string:\n %s\n", MyStrCat(s1, s2));
    printf("Concatenated string:\n %s\n", PtrStrCat(s3, s4));

    return 0;
}

void MyStrCat(char s1[], char s2[])
{
    int i, j;
    i = j = 0;
    
    // find the end of s1
    while (s1[i] != '\0')
    {
        i++;
    }

    // copy s2 to s1
    while ((s1[i++] = s2[j++]) != '\0')
    {
        ;
    }
}

void PtrStrCat(char *s1, char *s2)
{
    while(*s1)
    {
        s1++;
    }
    while(*s2)
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
}

