#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[100];
    float nota1;
     float nota2;
      float nota3;
}estudante;

int main(){
    estudante aluno[5];

    for(int i=0; i<2;i++){

    printf("insira a matricula do aluno %d: ",i+1);
    scanf("%d", &aluno[i].matricula);
    
    printf("insira o nome do aluno %d: ",i+1);
    scanf("%s", aluno[i].nome);

  
    printf("insira a nota 1 do aluno %d: ",i+1);
        scanf("%f", &aluno[i].nota1);
    printf("insira a nota 2 do aluno %d: ",i+1);
        scanf("%f", &aluno[i].nota2);
    printf("insira a nota 3 do aluno %d: ",i+1);
        scanf("%f", &aluno[i].nota3);

    }
     int maior=0;
    for ( int i = 0; i <5; i++)
    {
        
        if (aluno[i].nota1>maior)
        {
            maior=aluno[i].nota1;
            int aluno_maior=i;


        }
        
    }
    
        
    }
    


    return 0;
}

