//program to print Alphabets from A to Z using loop
#include <stdio.h>
int main()
{
    char i;
    printf("Uppercase Alphabets from A to Z are:\n");
    for(i='A';i<='Z';i++)
    {
        printf("%c  ",i);
    }
    printf("\n Lowercase Alphabets from a to z are:\n");
    for(i='a';i<='z';i++)
    {
        printf("%c  ",i);
    }
    return 0;
}

//Uppercase Alphabets from A to Z are:
// A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z  
// Lowercase Alphabets from a to z are:
// a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z

