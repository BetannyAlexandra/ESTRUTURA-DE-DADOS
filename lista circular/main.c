#include <stdio.h>
 
typedef struct{
    int conteudo;
    celula *prox;
    celula *ant;
}celula;

/*celula *buscar(celula *aux, int valor) {
    while (aux != NULL) {
        if (aux->conteudo == valor) {
            return aux;  //"Elemento encontrado"
        }
        aux = aux->prox;
    }
    return NULL;  //"Elemento não encontrado"
}*/

void troca_prox(celula *head, int valor){
    celula *aux=head;
    celula *prox;
    celula *referencia;
    celula *ant;
    while (aux != NULL) {
        if (aux->conteudo == valor) {
            ant->prox=prox;
            prox->ant=ant;
            prox->prox=referencia;
            referencia->ant=prox;
            referencia->prox=prox->prox;
            prox->prox->ant=referencia;
           
        }
        aux = aux->prox;
    }
    return NULL;  //"Elemento não encontrado"
}

int main(){
    celula c1;
    celula c2;
    celula c3;
    celula c4;

    c1.conteudo = 3;
    c2.conteudo = 5;
    c3.conteudo = 7;
    c4.conteudo = 1;

    c1.ant = NULL;
    c1.prox = &c2;
    c2.ant = &c1;
    c2.prox = &c3;
    c3.ant = &c2;
    c3.prox = &c4;
    c4.ant = &c3;
    c4.prox = NULL;

    celula *cabeca = &c1;

    troca_prox(&cabeca,5);


    return 0;
}