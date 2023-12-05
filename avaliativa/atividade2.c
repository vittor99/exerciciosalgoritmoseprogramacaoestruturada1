#include <stdio.h>

int main() {
    int chico_altura = 150;  // altura inicial de Chico em centímetros
    int ze_altura = 110;     // altura inicial de Zé em centímetros
    int anos = 0;            // número de anos

    while (ze_altura <= chico_altura) {
        chico_altura += 2;   // Chico cresce 2 centímetros por ano
        ze_altura += 3;      // Zé cresce 3 centímetros por ano
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja mais alto que Chico.\n", anos);

   
}
