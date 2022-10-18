#include <stdio.h>
#include <stdlib.h>

int main()
{
    float array[3][3];
   for (int i = 0; i < 10; i++)
    {
       printf("preencha o array\n");
       scanf("%f",&array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d\n",&array[i]);
    }
    
    return 0;
}