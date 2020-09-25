#include <stdio.h>

int main()
{
    char x;

    FILE *fo;
    fo = fopen("data.txt","r");

    if(fo == NULL)
    {
        printf("doc ghi gile loi");
        return 0;
    }
    do
    {
        x = fgetc(fo);
        printf("%c",x);

    }while (x != EOF);


    fclose(fo);
    getchar();
}