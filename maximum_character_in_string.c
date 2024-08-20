#include <stdio.h>
#include <string.h>

int count_char(char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char ch;
    int count;

    printf("Enter a string: ");
    gets( str);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    count = count_char(str, ch);

    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
//Enter a string: I am learning C programming
// Enter a character to count: m
// The character 'm' appears 3 times in the string.