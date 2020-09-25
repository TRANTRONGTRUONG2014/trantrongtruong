#include<stdio.h>
int main()
{
    char BUF[100];
    FILE *fo;
    fo = fopen("data.txt","r");
    if (fo == NULL)
    {
       printf("ERROR");
       return 1;
    }

    if(fgets(BUF,100,fo) == NULL)
    {
        printf("fgets error");
    }
    else
    {
        printf("%s ",BUF);
    }
    

    fclose(fo);
    getchar();
    
}