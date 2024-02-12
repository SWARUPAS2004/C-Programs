//C Program to Check Vowel or Consonant
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);
    if (ch=='a'||ch=='A'|| ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("The Charcter %c is a Vowel.\n ",ch);
    }
    else
    {
         printf("The Character %c is a Consonant.\n ",ch);
    }
    return 0;
}

// Enter the Character:O
// The Charcter O is a Vowel.

// Enter the Character:p
// The Character p is a Consonant.