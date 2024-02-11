//program to find whether the entered number is prime or not
#include <stdio.h>
int main()
{
    int n,i,flag;
    i=2;
    flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if (n%i==0)
        {
           flag=1;
           break;
        }
        i=i+1;
    }
    if(flag==0){
        printf("Number is Prime");
    }
    else
    {
       printf("\nNumber is Not prime");
    }
    return 0;
}

//Enter the Number:11
//Number is Prime