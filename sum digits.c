//summation of digits using while loop
#include <stdio.h>
int main()
{
    int n,rem,sum;
    sum=0;
    printf("Enter the Number:");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("\n Summation of digits %d",sum);
    return 0;
}
//Enter the Number:123

//Summation of digits 6