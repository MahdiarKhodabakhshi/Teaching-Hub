#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%d\n", atoi("45.78"));     //# Reads "45" and stops at '.'
    printf("%d\n", atoi("235x56"));    //# Reads "235" and stops at 'x'
    printf("%d\n", atoi("@-7e45"));     //# Invalid start character, returns 0
    printf("%d\n", atoi("  -123abc"));  //# Ignores leading spaces; returns -123
    printf("%d\n", atoi("007"));        //# Leading zeros are handled; returns 7
    return 0;
}
