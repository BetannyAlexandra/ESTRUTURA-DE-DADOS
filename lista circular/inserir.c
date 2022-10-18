#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int conteudo;
    celula *prox;
} celula;

void inserir(celula **head, int valor)
{
    celula *nova = (celula *)malloc(sizeof(celula));
    nova->conteudo = valor;
}
int main()
{

    // inserir

    celula *head;
    celula *nova;

    nova->prox = head;
    celula *tail = head;
    while (tail->prox != head)
    {
        tail = tail->prox;
    }
    tail->prox = nova;
    head = nova;

    // remover

    // celula *tail head;
    while (tail->prox != head)
    {
        tail = tail->prox;
    }
    tail->prox = head->prox;
    celula *aux = head;
    head = tail->prox;
    free(aux);

    /*
    segunda forma, sem criar auxiliar

    while(tail->prox!=head){
        tail=tail->prox;
    }
    tail->prox=head->prox;
    free(head);
    head=tail->prox;
    */

    return 0;
}