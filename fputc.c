#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "dia sinh nhan kiet";
    unsigned char i;
    char check;
    int a;
    FILE *fi;
    fi = fopen("data.txt","w");
    if(fi == NULL)
    {
        printf("error");
        return 0;
    }
    printf("sizeof(str) = %d", strlen(str));
    for(i=0;i<strlen(str);i++)
    {
        check = fputc(str[i],fi);
        if(check == NULL)
        {
            printf("error");
            fclose(fi);
            return 0;
        }
    }
    fclose(fi);

    getchar();
}