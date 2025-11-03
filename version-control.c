#include <stdio.h>

int main() {
    char line[100];
    FILE *fptr;

    fptr = fopen("./vc-test/test.c", "r");

    while (fgets(line, 100, fptr)) {
        printf("%s", line);
    };
    return 0;
};
