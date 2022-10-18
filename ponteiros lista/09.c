#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3]; 
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("Preencha a matriz %dx%d\n",i,j);
        scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {  for(int j=0;j<3;j++){
       printf("%d\n",&matriz[i][j]);}
    }
    
    return 0;
   
        
}