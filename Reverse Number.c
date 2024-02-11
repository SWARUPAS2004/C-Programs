//program to take input as a Number and reverse it by using while loop
#include <stdio.h>
int main()
{
    int n,reminder;
    printf("\nEnter a Number:");
    scanf("%d",&n);
    printf("Reverse Number is: ");

    while(n>0)
    {
        reminder=n%10;
        printf("%d",reminder);
        n=n/10;
    }
}
//Enter a Number:456
//Reverse Number is:654