//write a program to find sum and average marks obtained by a class of 10 students in a test 
#include <stdio.h>
int main()
{
    int marks[10],average,sum=0,i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the marks:");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+marks[i];
    }
    printf("\nSum of marks= %d",sum);
    average=sum/10;
    printf("\nAverage marks=%d",average);
}


// Enter the marks:60

// Enter the marks:56

// Enter the marks:75

// Enter the marks:49

// Enter the marks:86

// Enter the marks:75

// Enter the marks:70

// Enter the marks:85

// Enter the marks:49

// Enter the marks:50

// Sum of marks= 655
// Average marks=65