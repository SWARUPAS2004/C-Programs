//sorting the array elements in Descending order using bubble sort method
#include <stdio.h>
int main()
{
    int i, j, temp,array[100],n;
    printf("Enter the number of elements to be stored in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Elemnets %d:",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\n Ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
        
    }
}
// Enter the number of elements to be stored in array: 5
// Elemnets 0:89
// Elemnets 1:32
// Elemnets 2:56
// Elemnets 3:79
// Elemnets 4:29

//  Ascending order:89     79      56      32      29