#include <stdio.h>
int main()
{
    FILE *fi;
    char check;
    fi = fopen("data.txt","w");
    if(fi == NULL)
    {
        printf("ERROR");
        return 1;
    }

    check = fputs("tran trong truong2",fi);
    if(check == EOF)
    {
        printf("ERROR");

        fclose(fi);
        return 0;
    }

    fclose(fi);
}