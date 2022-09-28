#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
  int conteudo;
  struct cel *prox;
} celula;

void imprimir(celula *cabeca) {
  // for (celula *tmp = cabeca; tmp != NULL; tmp = tmp->prox) {
  //   printf("%d -> ", tmp->conteudo);
  // }
  celula *tmp = cabeca;
  while (tmp != NULL) {
    printf("%d -> ", tmp->conteudo);
    tmp = tmp->prox;
  }
  printf("NULL");
} 

celula *inserir_inicio(celula *cabeca, celula *nova) {
  nova->prox = cabeca;
  cabeca = nova;
  return cabeca;
}

void inserir_fim(celula *cabeca, celula *nova) {

  celula *ultima = cabeca;
  while (ultima->prox != NULL) {
    ultima = ultima->prox;
  }

  nova->prox = NULL;
  ultima->prox = nova;
}

void inserir_inicio2(celula **ptr, celula *nova) {
  nova->prox = *ptr;
  *ptr = nova;
}

int main() {
  celula c0;

  celula c1;
  celula c2;
  celula c3;
  celula c4;

  c0.conteudo = 0;

  c1.conteudo = 1;
  c2.conteudo = 2;
  c3.conteudo = 3;
  c4.conteudo = 4;

  c1.prox = &c2;
  c2.prox = &c3;
  c3.prox = &c4;
  c4.prox = NULL; // 0

  celula *head = &c1;

  printf("\nAntes\n");
  imprimir(head);

  inserir_fim(&head, &c0);

  printf("\nDepois\n");
  imprimir(head);
}
