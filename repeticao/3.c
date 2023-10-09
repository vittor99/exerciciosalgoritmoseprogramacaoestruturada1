#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main() {
    int n;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número deve ser não negativo.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }


}
