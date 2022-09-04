#include <stdio.h>

int dobro(int A, int B){
A=A*2;
B=B*2;

int dobro=A+B;

return dobro;
   
}

int main(void) {
    int A,B,resultado;
  printf("informe um número\n");
  scanf("%d",&A);
  printf("informe um número\n");
  scanf("%d",&B);
  resultado=dobro(A,B);
  printf("%d",resultado);
  return 0;
}
