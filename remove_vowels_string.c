//c program to romove vowels from string
#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    int len, i, j;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--; 
            i--;   
        }
    }
    printf("After removal of vowels: %s\n", str);
    return 0;
}

// Enter the string: Good Morning  
// After removal of vowels: Gd Mrnng