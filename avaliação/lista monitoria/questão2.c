
#include <stdio.h>
#include <stdlib.h>

typedef struct{
char rua[100],bairro[100];
int num;
} endereco;
typedef struct
{
   char nome[30];
   int idade;
  endereco enderecopessoa;
}pessoa;

int main(){
 pessoa b;
 printf("digite o nome\n ");
 scanf("%s",b.nome);

 printf("digite a idade\n");
 scanf("%d",&b.idade);

 printf("digite a rua\n ");
 scanf("%s",b.enderecopessoa.rua);

  printf("digite o  número da casa\n");
 scanf("%d",&b.enderecopessoa.num);

 printf("digite o bairro\n");
 scanf("%s",b.enderecopessoa.bairro);
 
printf("nome=%s\n",b.nome);
printf("idade=%d\n",b.idade);
printf("Rua=%s",b.enderecopessoa.rua);
printf("bairro=%s",b.enderecopessoa.bairro);
printf("%d",b.enderecopessoa.num);
    return 0;

}