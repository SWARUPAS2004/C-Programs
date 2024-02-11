//Half pyramid pattern of numbers
#include <stdio.h>
int main(){
    int rows;
    int i,j;
    printf("Number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
//Numbers of Rows:5
//1
//22
//333
//4444
//55555