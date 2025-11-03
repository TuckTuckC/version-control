#include <stdio.h>

int main() {
    char str[100];
    FILE *fptr;

    fptr = fopen("./vc-test/test.c", "r");
    fgets(str, 100, fptr);
    printf("%s", str);
    return 0;
};
