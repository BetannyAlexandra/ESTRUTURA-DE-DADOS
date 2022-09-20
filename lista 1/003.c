#include <stdio.h>

int main(void) {
    float notas[10];
    float maior,menor;
    for (int i = 0; i < 10; i++) {
    printf("informe as notas de 10 alunos\n");
    scanf("%f", &notas[i]);
  }
  maior=notas[0];
  for(int i=1;i<=10;i++){
    if(maior<notas[i]){
        maior=notas[i];
    }
  }
  menor=notas[0];
  for(int i=1;i<=10;i++){
    if(notas[i]<menor){
        menor=notas[i];
    }
  }
  printf("a maior nota %f\n", maior);
  printf("a menor nota %f\n", menor);
  return 0;
}
