#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];

    printf("preencha o array\n");

for (int i = 0; i <5; i++)
{
     scanf("%d",(array+i) );
}

    {
     

    }

    printf("array preenchido\n");


for (int i = 0; i <5; i++)
 {
     printf("\no valor =%d\n",(*(array+i)) );
     printf("\no dobro do valor=%d\n",(*(array+i)*2) );
}


    return 0;
}