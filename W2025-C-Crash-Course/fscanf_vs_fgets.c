#include <stdio.h>

int main() {
    FILE *in; //# File pointer for input
    //# Why do we use a pointer variable for handling a file?
    char island[100];

    in = fopen("fscanf_vs_fgets_test.txt", "r"); //# The reason is that fopen() returns a pointer to the file stream.
    if (in == NULL) {
        perror("Error opening file");
        return 1;
    }

    //# Using fscanf to read a string from the file
    fscanf(in, "%s", island);
    printf("Using fscanf, read from file: %s\n", island);

    //# Since fscanf has already read some data, the pointer is not at the beginning.
    // #rewind ensures that the next read operation starts from the beginning.
    rewind(in);
    fgets(island, 100, in);
    printf("Using fgets, read from file: %s", island);

    fclose(in);
    return 0;
}
