#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int numbers[] = {1, 2, 3, 4, 2, 1, 2, 4, 3};
    for (int i = 0; i < 9; ++i) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}