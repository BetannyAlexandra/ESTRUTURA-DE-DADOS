#include <stdio.h>
#include <stdlib.h>
int main(void) {

     int *p,*vetor=NULL ,tam;
     printf("Informe o tamanho do vetor");
     scanf("%d",&tam);
    vetor=malloc(tam*sizeof(int));
    *p=vetor;
    for(int i=0;i<tam;i++) {
    printf("preencha o vetor\n");
    scanf("%d", &vetor[i]);
    }
    for(int i=0;i<tam;i++){
         ;
    }
     for(int i=0;i<tam;i++)
   printf("%d",vetor);

    free(vetor);
  return 0;
}
