#include <stdio.h>
#include <stdlib.h>

int dobro(int *A, int *B)
{
    int soma=0;
    *A=2*(*A);
    *B=2*(*B);
    soma=(*A)+(*B);



  return soma;
    
}
int main()
{

    int nm1, nm2,soma; 

    printf("informe o valor de nm1\n");
    scanf("%d", &nm1);
    printf("informe o valor de nm2\n");
    scanf("%d", &nm2);
    printf("numero 1 vale=%d\n", nm1);
    printf("numero2 vale=%d\n", nm2);

    soma=dobro(&nm1, &nm2);
    printf("A soma do dobro =%d",soma);
    return 0;
}