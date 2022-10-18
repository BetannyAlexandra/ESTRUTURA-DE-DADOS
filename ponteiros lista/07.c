#include <stdio.h>
#include <stdlib.h>

void soma(int *A, int *B)
{
    *A=(*A)+(*B);

    
}
int main()
{

    int nm1, nm2; 

    printf("informe o valor de A\n");
    scanf("%d", &nm1);
    printf("informe o valor de B\n");
    scanf("%d", &nm2);
    printf("A vale=%d\n", nm1);
    printf("B vale=%d\n", nm2);

    soma(&nm1, &nm2);
    printf("A agora vale=%d\n", nm1);

   
    return 0;
}