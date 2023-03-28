#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        printf("The character %c is a uppercase alphabet.\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("The character %c is a lowercase alphabet.\n", c);
    } else {
        printf("The character %c is not an alphabet.\n", c);
    }
    return 0;
}
