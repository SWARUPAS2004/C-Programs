//C program to count total number vowels and consonants in a string 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i,vowels,consonants;
    char str[50];
    int n;
    printf("Enter the string: ");
    gets(str);
    puts(str);
    n=strlen(str);
    vowels=0,consonants=0;
    for(i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowels++;
        }
        else{
            consonants++;
        }
    
    }
    printf("Total number of vowels are: %d\n",vowels);
    printf("Total number of consonants are: %d",consonants);
    return 0;

}
// Enter the string: Programming language
// Programming language
// Total number of vowels are: 7
// Total number of consonants are: 13