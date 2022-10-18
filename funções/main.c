#include <stdio.h>
#include <stdlib.h>

int *array(int *n)
{
    printf("Informe o tamanho do vetor: ");
    scanf("%d", n);
    int *vetor = (int)malloc(sizeof((int)(*n)));
    printf("preencha o vetor: ");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void comparar(int *vetor, int n)
{
   
    int cont = 0; 
     int maior=*vetor[0];
    for (int i = 0; i < n; i++)
    {  
       
        if (*vetor[i] > maior);
        {
            maior = *vetor[i];
            cont = 1;
        }

    for (int i = 0; i < n; i++)
        if (*vetor[i] == maior)
        {
            cont++;
        }
        
    }

    printf(" maior -> %d", maior);
    printf("ele aparece %d vezes", cont);
}

void imprimir(int *vetor, int n)
{
    printf("Imprimir\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
}

int main()
{
    int n;
    int *vetor = array(&n);

    imprimir(vetor, n);
    comparar(vetor, n);
}