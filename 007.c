
#include <stdio.h>
#include <stdlib.h>

int funcao(int n, int *vetor){

 for (int i = 0; i <= n; i++) {
    printf("preencha o vetor\n");
    scanf("%d", &vetor[i]);
  }
  for (int i = 0; i <= n; i++) {
    printf("vetor[%d]=%d\n",i, vetor[i]);
  }
}
int main(void) {
  int n;
  int *vetor;
  printf("informe o tamanho do vetor\n");
  vetor = malloc(n * sizeof(int));
  scanf("%d", &n);
 funcao(n,*vetor);
  
  free(vetor);
  return 0;
}
