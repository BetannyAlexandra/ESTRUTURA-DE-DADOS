#include <stdio.h>
#include <stdlib.h>

typedef struct cel{

  int conteudo;
    struct cel *prox;
    
}celula;

void retornar(celula *head,int valor){
  int cont=1;
   celula *aux=head;
    while( aux->conteudo != valor)
    {   aux=aux->prox;
      cont++;
    } return cont;
} 
int main(){
    celula a;
    celula b;
    celula c;
    celula d;

    celula *head=&a;
    a.conteudo=5;
    b.conteudo=6;
    c.conteudo=8;
    d.conteudo=127;

    a.prox=&b;
      b.prox=&c;
      c.prox=&d;
      d.prox=NULL;

  

    int valor;
    printf("informe o elemento");
    scanf("%d",&valor);
    printf("o valor está na posição %d ",retornar(head,valor));



  return 0;

}