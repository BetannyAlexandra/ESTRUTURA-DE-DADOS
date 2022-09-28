#include <stdio.h>
#include <stdlib.h>

typedef struct {
char nome[100];
char curso[100];
int matricula;
}aluno;

int main(void) {
    aluno aluno[5];
    int i;
for ( i = 1; i<=5 ; i++){
printf("informe o  numero de matricula");
scanf(" %d",&aluno[i].matricula);
printf("informe o  nome do aluno");
scanf("%s",aluno[i].nome);
printf("informe o  curso");
scanf("%s",aluno[i].curso);


 }
 
  return 0;
}