#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inte = 3;
    char cha = 'a';
    float flu = 2.5;

    printf("Os valores antes da mudança\n");
    printf("%d\n", inte);
    printf("%c\n", cha);
    printf("%f\n", flu);

    int *intp = &inte;
    char *chap = &cha;
    float *flup = &flu;
    
    printf("Informe um caractere\n");
    scanf("%c", chap);
    printf("Informe um valor\n");
    scanf("%d", intp);
    printf("Informe um valor flutuante\n");
    scanf("%f", flup);
  

    printf("\nOs valores depois da mudança\n");

    printf("%d\n", inte);
    printf("%f\n", flu);
    printf("%c\n", cha);

    return 0;
}
