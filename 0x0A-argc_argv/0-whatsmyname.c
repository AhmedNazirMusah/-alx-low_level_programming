#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc >= 1) {
        printf("%s\n", argv[0]);
    } else {
        printf("Program name unavailable.\n");
    }

    return 0;
}

