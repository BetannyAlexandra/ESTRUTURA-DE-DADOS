#include <stdio.h>
#include <stdlib.h>

void troca(int *A, int *B)
{
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;
}
int main()
{

    int A, B;

    printf("informe o valor de A\n");
    scanf("%d", &A);
    printf("informe o valor de B\n");
    scanf("%d", &B);
    printf("A vale=%d\n", A);
    printf("B vale=%d\n", B);

    troca(&A, &B);
    printf("A agora vale=%d\n", A);
    printf("B agora vale=%d\n", B);

    return 0;
}