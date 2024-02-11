//Inverted half pyramid pattern of Numbers
#include <stdio.h>
int main()
{
    int rows;
    printf("Numbers of Rows:");
    scanf("%d",&rows);

    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
//Numbers of Rows:7
// 7777777
// 666666
// 55555
// 4444
// 333
// 22
// 1
