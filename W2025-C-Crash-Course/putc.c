#include <stdio.h>

int main() {
    FILE *output;

    //# Open a file for writing
    output = fopen("output.txt", "w");//# If you have a file with the same name it will overwrite it
    //# If the file doesn't exist, it will be created
    if (output == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    putc('$', output);
    putc(66, output);

    fclose(output);
    return 0;
}
