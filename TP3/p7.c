#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char prog[20];

    sprintf(prog, "%s.c", argv[1]);
    execlp("gcc", "gcc", prog, "-Wall", "-o", argv[1], NULL);
    printf("Error occurred when calling execlp.\n");
    exit(1);
}