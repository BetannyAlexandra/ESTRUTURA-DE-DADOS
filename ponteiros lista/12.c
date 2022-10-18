#include <stdio.h>
#include <stdlib.h>

int ordenar(int *num1, int *num2, int *num3)
{
    int temp;
    if (*num1 > *num3)
    {
        temp = *num3;
        *num3 = *num1;
        *num1 = temp;
    }
    if (*num1 > *num2)
    {
        temp = *num2;
        *num2 = *num1;
        *num1 = temp;
    }
    if (*num2 > *num3)
    {
        temp = *num3;
        *num3 = *num2;
        *num2 = temp;

    }if(*num1==*num2&&*num1==*num3&&*num2==*num3){

    return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num1, num2, num3;
    printf("informe tres valores");
    scanf("%d ", &num1);
    scanf("%d ", &num2);
    scanf("%d ", &num3);
    printf("os numeros sao=%d,%d,%d\n", num1, num2, num3);

    printf("retorno=%d\n",ordenar(&num1, &num2, &num3));
    printf("os numeros em ordem sao=%d,%d,%d\n", num1, num2, num3);

    return 0;
}