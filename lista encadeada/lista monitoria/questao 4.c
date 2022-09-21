#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[30];
    int notas[3];
}estudante;

int main(){
    estudante aluno[5];

    for(int i=0; i<5;i++){

    printf("insira a matricula do aluno %d: ",i+1);
    scanf("%d", &aluno[i].matricula);
    
    printf("insira o nome do aluno %d: ",i+1);
    scanf("%s", aluno[i].nome);
    fflush(stdin);

        for(int j=0;j<3;j++){
        printf("insira a nota %d do aluno %d: ",j+1,i+1);
        scanf("%d", &aluno[i].notas[i]);
        }
    }

    // maior nota da primeira prova
    int maior=0;
    char aluno_maior_nota;
        for(int i=0; i<5;i++){
            if(aluno[i].notas[0]>maior) {
                maior=aluno[i].notas[0];
                aluno_maior_nota=aluno[i].nome;
        }
        printf("o aluno com a maior nota é %s\n",aluno_maior_nota);

    // maior media geral
    
    



    return 0;
}

