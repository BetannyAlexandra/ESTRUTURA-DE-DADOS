#include <stdio.h>
#include <stdlib.h>

typedef struct{ 
    int conteudo;
    célula *prox;
    célula *ant;
} célula;

int tamanho()

int  main () {
  célula c1;
  célula c2;
  célula c3;
  célula c4;

  c1. conteudo = 3 ;
  c2. conteudo = 5 ;
  c3. conteudo = 7 ;
  c4. conteudo = 1 ;

  c1.ant = NULL;
  c1.prox = &c2;
  c2.ant = &c1;
  c2.prox = &c3;
  c3.ant = &c2;
  c3.prox = &c4;
  c4.ant = &c3;
  c4.prox = &c1;

}