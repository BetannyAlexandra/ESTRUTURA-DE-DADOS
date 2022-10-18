#include <stdio.h>
#include <stdlib.h>

void separar(int* X){
    int* vetorA=(int*)malloc(sizeof(int)*30);
    int* vetorB=(int*)malloc(sizeof(int)*30);
    int nump=0,numi=0;

    for (int i = 0; i <=10; i++)
    {
        if(X[i]%2==0){
        vetorA[nump]=X[i];
            nump++;
        }else{
            vetorB[numi]=X[i];
            numi++;
        }
    }

    for(int i=0;i<=nump;i++){ 
        printf("par=%d\n",vetorA[i]);
    }
    for(int i=0;i<=numi;i++){ 
        printf("impar=%d\n",vetorB[i]);
    }
    
    

}
int main(){
    int X[30];
    printf("Informe 30 valores:\n");
    for (int i = 0; i <=10; i++)
    {
        scanf("%d",&X[i]);
    }
    separar(X);
    return 0;
}
