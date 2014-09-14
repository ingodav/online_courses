#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("char: %d\n", sizeof(char));
    printf("unsigned char: %d\n", sizeof(unsigned char));
    printf("short: %d\n", sizeof(short));
    printf("int: %d\n", sizeof(int));
    printf("unsigned int: %d\n", sizeof(unsigned int));
    printf("unsigned long: %d\n", sizeof(unsigned long));
    printf("float: %d\n", sizeof(float));    

    return 0;
}