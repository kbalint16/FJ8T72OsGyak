#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("vezeteknev.txt", "w");

    fprintf(fp,"Kiss István Bálint\n");
    fprintf(fp,"Programtervezo informatikus\n");
    fprintf(fp, "FJ8T72\n");

    fp=fopen("vezeteknev.txt", "r");



    fclose(fp);

    return 0;
}
