#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char sexo[30];
    char cor_olhos[30];
    char cor_cabelo[30];
    int idade;

}pessoa;

void recebe(pessoa *habitantes){
    for (int i = 0; i <=3; i++)
    {
        printf("Informe os dados do habitante\n");
        printf("Sexo:");
        scanf("%s",habitantes[i].sexo);
         printf("Cor dos olhos:");
        scanf("%s",habitantes[i].cor_olhos);
         printf("Cor do cabelo:");
        scanf("%s",habitantes[i].cor_cabelo);
         printf("Idade:");
        scanf("%d",&habitantes[i].idade);

    }
}
 void imprimir(pessoa *habitantes){
     for (int i =1 ; i <=3; i++)
    {
     
        printf("Sexo:\n");
        printf("%s",habitantes[i].sexo);
         printf("Cor dos olhos:\n");
        printf("%s",habitantes[i].cor_olhos);
         printf("Cor do cabelo:\n");
        printf("%s",habitantes[i].cor_cabelo);
         printf("Idade:\n");
        printf("%d",habitantes[i].idade);

    }
 }
int main(){
    pessoa habitantes[50];
    recebe(habitantes);
    imprimir(habitantes);
 return 0;
}