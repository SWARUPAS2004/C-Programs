//c program to separate individual characters from string 
#include <stdio.h>
int main(){
    char str[15];
    int l=0;
    printf("Input the string :");
    fgets(str,sizeof str ,stdin);
    printf("THe character of the string are: \n");
    while (str[l]!='\0'){
        printf("%c  ",str[l]);
        l++;
    }
    printf("\n");
    return 0;

}
// Input the string :Programming
// THe character of the string are: 
// P  r  o  g  r  a  m  m  i  n  g
