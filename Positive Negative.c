//program to accept a number from user and check whether it is positive, negative or zero
#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter a Number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("\n Number is Positive");
    }
    else 
    {
        printf("\n Number is Negative");
    }

}
//Enter a Number:11
//Number is Positive

//Enter a Number:-40
//Number is Negative
