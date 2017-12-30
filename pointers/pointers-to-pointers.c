#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];
char *alloc(int);

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);
int getline(char *, int);

int main(void){
    int nlines;

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else{
        printf("Error: input too big to sort.\n");
        return 1;
    }
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0){
        if (nlines >= maxlines || (p = alloc(len)) == NULL){
            return -1;
        } else{
            line[len-1] = '\0'; /* delete newline */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }

    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines){
    int i;

    while (nlines-- > 0){
        printf("%s\n", *lineptr++);
    }
}

/* qsort: sort into increasing order */
void qsort(char *v[], int i, int j){
    int i, last;
    void swap(char *v[], int i, int j);
}