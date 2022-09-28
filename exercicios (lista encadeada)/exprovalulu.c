
#include <stdio.h>
#include <stdlib.h>

typedef struct no{ //struct pro no.
    int valor;
    struct no *prox;
}no;

 void inseririnicio(no **lista,int num)
 no *novo=malloc(sizeof(no))
 
 if(novo){
   novo->valor=num;
   novo->prox=*lista;
   *lista=novo;

 
 }else
 printf("Erro ao alocar memoria"); 

 void imprimir(no*no)
{
    printf("\n---lista----\n");
    while(no!=NULL){
        printf("%d",no->valor);

    }printf("\n\n\n")

}
int main(){
int op;
no *lista=NULL;
do{
printf()
}while(op=!0)

    retun 0;
}