#include <stdio.h>
#include <stdlib.h>

void preencher(int **matriz){
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
        printf("Preencha a matriz %dx%d\n",i,j);
        scanf("%d",&matriz[i][j]);
        }
      
    }

}
int main(){
    int matriz[3][3];
    preencher(matriz);
    return 0;
}

