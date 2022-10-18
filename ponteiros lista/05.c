#include <stdio.h>
#include <stdlib.h>

void troca(int *nm1, int *nm2)
{
    int aux;
   if(*nm2>*nm1){
   aux=*nm2;
   *nm2=*nm1;
   *nm1=aux;

}
    
}
int main()
{

    int nm1, nm2;

    printf("informe o valor de nm1\n");
    scanf("%d", &nm1);
    printf("informe o valor de nm2\n");
    scanf("%d", &nm2);
    printf("numero 1 vale=%d\n", nm1);
    printf("numero2 vale=%d\n", nm2);

    troca(&nm1, &nm2);

    printf("o numero 1 agora vale=%d\n", nm1);
    printf("o numero 2 vale=%d\n", nm2);
    return 0;
}