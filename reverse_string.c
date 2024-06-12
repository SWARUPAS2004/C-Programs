// C program to print individual charater of string in reverse order
#include <stdio.h>
#include <string.h>
int main()
{
    char str[7];
    int l,i;
    printf("Input the string:");
    fgets(str ,sizeof str ,stdin);
    l=strlen(str);
    printf("The character of a string in reverse order:\n");
    for(i=l-1;i>=0;i--)
    {
        printf("%c ",str[i]);
    }
    printf("\n");
    return 0;

}
// Input the string:hello
// The character of a string in reverse order:
// olleh