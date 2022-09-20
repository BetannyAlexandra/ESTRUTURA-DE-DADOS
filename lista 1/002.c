#include <stdio.h>

int main(void) {
    int num,i=0,mult;
    double a;
printf("%li",sizeof(a));
    printf("informe um numero entre 1 e 9\n");
    scanf("%d",&num);

while(i<=9){ 
        mult=num*i;
      
   printf("%d x %d =%d\n",num,i,mult);  
   i++;
    }

  return 0;
}
