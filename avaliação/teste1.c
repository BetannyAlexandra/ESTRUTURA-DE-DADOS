#include <stdio.h>
#include <stdlib.h>


typedef struct cel {
  char nome[30];
  int quantidade_atual;
  int quantidade_minima;
  float preco;
  struct cel *prox;
} celula;

float valor_total(celula*head){
    if(head=NULL){ 
    printf("Opção inválida");
    return;
} 
    float soma=0.0;
    celula *aux=head;
    soma=soma+(aux->preco*aux->quantidade_atual);
    aux = aux->prox;
  return soma;
}  


float valor_medio(celula *head){
    
    if(head=NULL){ 
    printf("Opção inválida");
    return;
} 
    float soma=0.0;
    float cont=0.0;
    float media=0.0;
    celula *aux=head;
    soma=soma+(aux->preco);
    aux = aux->prox;
    cont++;
      return soma/cont;
}



void imprimir(celula *aux) {
  while (aux != NULL) {
    printf(" Nome do produto->%s\n ", aux->nome);
    printf(" Quantidade atual do produto-> %d\n", aux->quantidade_atual);
    printf(" Quantidade mínima do produto-> %d\n", aux->quantidade_minima);
    printf(" Preço do produto-> %.2f\n", aux->preco);
    aux = aux->prox;
  }
  printf("NULL\n");
}

void inserir(celula **ptr_cabeca) {
  celula *nova = (celula *)malloc(sizeof(celula));
  
  printf("Informe o nome do produto: ");
  scanf("%30[^\n]s", nova->nome);
  nova->prox = *ptr_cabeca;
  *ptr_cabeca = nova;
   printf("informe a quantidade atual do produto: ");
    scanf("%d",&nova->quantidade_atual);
    printf("Informe a quantidadr mínima do produto: ");
    scanf("%d",&nova->quantidade_minima);
    printf("informe o preço do produto: ");
    scanf("%f",&nova->preco);
}


void imprimir_menu() {
  printf("\n\n");
  printf("*******\t\tMENU\t********\n");
  printf("*\t1 - Inserir produto\t*\n");
  printf("*\t2 - Imprimir dados do produto\t*\n");
  printf("*\t3 - Imprimir valor total\t*\n");
  printf("*\t4 - Imprimir valor médio\t*\n");
  printf("*\t0 - Sair\t\t*\n");
}

int main() {
  celula *head = NULL;
  
  int opc = 1;
  while (opc != 0) {
    imprimir_menu();
    scanf("%d", &opc);
    fflush(stdin);
    switch (opc) {
      case 1:
        inserir(&head);
        break;

      case 2:
        imprimir(head);
        break;
        case 3:
         printf("%f",valor_total);

        break;
        case 4:
         printf("%f",valor_medio);
        break;
        case 0:
        break;

      default:
        printf("Opção inválida\n");
        break;
    }
  }

  return 0;
}