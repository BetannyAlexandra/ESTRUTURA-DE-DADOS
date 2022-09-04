
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int tam;
     char *nome,*sexo;
    nome=malloc(100*sizeof(char));
    sexo=malloc(100*sizeof(char));
    printf("informe o seu nome\n");
    scanf("%s",nome);
    printf("informe seu sexo (masculino ou feminino)\n");
    scanf("%s",sexo);
    tam=strlen(sexo);
    if(tam==8){
        printf("Bem-vinda %s",nome);
    } else{
        printf("Bem-vindo %s",nome);
    }
    free(nome);
    free(sexo);
  return 0;
}
