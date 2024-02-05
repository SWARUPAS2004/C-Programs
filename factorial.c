#include <stdio.h>
int main(){
    int a,n;
    a=1;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n>0){
        a=a*n;
        n=n-1;
    }
    {
        printf("Factorial is %d",a);
    }
    return 0;
    }