#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,num2;
    printf("OS dois endereços\n");
     printf("%x\n",&num);
     printf("%x\n",&num2);

     printf("informe o valor de num1\n");
     scanf("%d",&num);
       printf("informe o valor de num2\n");
     scanf("%d",&num2);

printf("o elemento do maior endereço=");
    if(&num>&num2){
        printf("%d",num);
    }else{
          printf("%d",num2);
    }

    return 0;
}