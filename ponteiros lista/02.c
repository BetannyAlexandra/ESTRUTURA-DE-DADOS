#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("OS dois endereços\n");
     printf("%x\n",&num1);
     printf("%x\n",&num2);

printf("endereço do maior");
    if(&num1>&num2){
        printf("%x",&num1);
    }else{
          printf("%x",&num2);
    }

    return 0;
}