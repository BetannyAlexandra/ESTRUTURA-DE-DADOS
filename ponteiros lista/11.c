#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];

    printf("preencha o array\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", (array + i));
    }

    {
    }

    printf("array preenchido\n");

    for (int i = 0; i < 5; i++){
        printf("\no valor =%d\n", (*(array + i)));
    }
    for (int i = 0; i < 5; i++){
        if (*(array + i) % 2 == 0)
        {
            printf("\no endereço do elemento %d = %p\n", array[i], &array[i]);
        }
    }

    return 0;
}