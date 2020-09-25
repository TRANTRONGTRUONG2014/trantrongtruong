#include <stdio.h>
int main()
{
    FILE *fo;
    int a;
    float b;
    char *str = NULL;
    fo = fopen("data.txt","r");
    if(fo == NULL)
    {
        printf("error");
        return 0;
    }
    
    fscanf(fo,"%d",&a);
    fscanf(fo,"%f",&b);
    fscanf(fo,"%s",str);
    fclose(fo);

    printf("a = %d\n",a);
    printf("b = %f\n",b);
    printf("str = %s\n",*str);
   
    getchar();
}