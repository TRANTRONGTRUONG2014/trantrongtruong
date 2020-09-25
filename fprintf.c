#include <stdio.h>
int main()
{
    int a=10;
    float b=2.333332;
    char *str = "tran trong truong";
    FILE *fi;
    fi = fopen("data.txt","w+");
    if(fi == NULL)
    {
        printf("doc file loi");
        return 0;
    }
    fprintf(fi,"%d\n",a);
    fprintf(fi,"%lf\n",b);
    fprintf(fi,"%s\n",str);
    
    fclose(fi);
}