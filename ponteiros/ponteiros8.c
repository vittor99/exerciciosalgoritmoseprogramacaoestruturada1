#include <stdio.h>

int main() {
    float array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i * 1.5;
    }

    for (int i = 0; i < 10; i++) {
        printf("Endereco do elemento %d: %p\n", i, (void *)&array[i]);
    }

    return 0;
}
