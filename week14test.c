#include<stdio.h>
int main()
{
    FILE *flim;
    flim=fopen("test.tex","w");
    fprintf(flim,"%s","123");
fclose(flim);
}