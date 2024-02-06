#include <stdio.h>
int main(){
    int i,j;
    printf("Multiplication table from 1 to 5:\n\n");

    for(i=1;i<=10;i++)
    {
       for(j=1;j<=10;j++)
       {
        printf("%d\t",i*j);
       }
       printf("\n");
    }
}