#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char rua[50];
    char bairro[30];
    int numero_casa;
}endereco;
typedef struct{
    int idade;
    char nome[30];
    endereco endereco_pessoa;
}pessoa;

int main(){
    pessoa N;

    printf("Insira o nome da pessoa: ");
    scanf("%[^\n]s", N.nome);

    fflush(stdin);

    printf("Insira a idade da pessoa: ");
    scanf("%d", &N.idade);
  
    fflush(stdin);

    printf("Insira o nome da rua: ");
    scanf(" %[^\n]s", N.endereco_pessoa.rua);

    fflush(stdin);
    
    printf("Insira o bairro: ");
    scanf(" %[^\n]s", N.endereco_pessoa.bairro);

    fflush(stdin);

    printf("Insira o numero da casa: ");
    scanf("%d", &N.endereco_pessoa.numero_casa);
    return 0;
}