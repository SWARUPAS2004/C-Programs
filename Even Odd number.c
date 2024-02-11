//program to accept a number from user and check whether it is even or odd 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n Number is Even");
    }
    else
    {
       printf("\n Number is Odd");
    }
}
//Enter the Number:14
//Number is Even 

//Enter the Number:9
//Number is Odd
