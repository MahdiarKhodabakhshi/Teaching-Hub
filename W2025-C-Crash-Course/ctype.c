#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a';
    if (isalpha(ch)) {
        printf("%c is a letter.\n", ch);
        printf("Uppercase: %c\n", toupper(ch));
    }
    return 0;
}
