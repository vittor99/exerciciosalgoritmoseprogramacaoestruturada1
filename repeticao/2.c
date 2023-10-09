#include <stdio.h>

int main() {
    int moradores = 50;
    char elevador_mais_frequentado = 'A';
    char periodo_mais_usado = 'M';
    int total_uso_elevador_a = 0;
    int total_uso_elevador_b = 0;
    int total_uso_elevador_c = 0;
    int total_matutino = 0;
    int total_vespertino = 0;
    int total_noturno = 0;

    for (int i = 0; i < moradores; i++) {
        char elevador;
        char periodo;

        printf("Para o morador %d:\n", i + 1);
        printf("Elevador mais frequentado (A/B/C): ");
        scanf(" %c", &elevador);

        printf("Período mais usado (M/V/N): ");
        scanf(" %c", &periodo);

        // Atualizar contadores
        if (elevador == 'A') {
            total_uso_elevador_a++;
        } else if (elevador == 'B') {
            total_uso_elevador_b++;
        } else if (elevador == 'C') {
            total_uso_elevador_c++;
        }

        if (periodo == 'M') {
            total_matutino++;
        } else if (periodo == 'V') {
            total_vespertino++;
        } else if (periodo == 'N') {
            total_noturno++;
        }
    }

    // Encontrar o elevador mais frequentado
    if (total_uso_elevador_b > total_uso_elevador_a) {
        elevador_mais_frequentado = 'B';
    }
    if (total_uso_elevador_c > total_uso_elevador_b) {
        elevador_mais_frequentado = 'C';
    }

    // Encontrar o período mais usado
    if (total_vespertino > total_matutino && total_vespertino > total_noturno) {
        periodo_mais_usado = 'V';
    } else if (total_noturno > total_matutino && total_noturno > total_vespertino) {
        periodo_mais_usado = 'N';
    }

    // Calcular a diferença percentual entre o mais usado e o menos usado
    int total_min = (total_matutino < total_vespertino) ? total_matutino : total_vespertino;
    total_min = (total_min < total_noturno) ? total_min : total_noturno;

    int total_max = (total_matutino > total_vespertino) ? total_matutino : total_vespertino;
    total_max = (total_max > total_noturno) ? total_max : total_noturno;

    float diferenca_percentual = ((float)(total_max - total_min) / total_min) * 100;

    // Calcular a percentagem sobre o total de serviços prestados do elevador de média utilização
    int total_uso_elevador_medio = 0;
    if (total_uso_elevador_a >= total_uso_elevador_b && total_uso_elevador_a >= total_uso_elevador_c) {
        total_uso_elevador_medio = total_uso_elevador_a;
    } else if (total_uso_elevador_b >= total_uso_elevador_a && total_uso_elevador_b >= total_uso_elevador_c) {
        total_uso_elevador_medio = total_uso_elevador_b;
    } else if (total_uso_elevador_c >= total_uso_elevador_a && total_uso_elevador_c >= total_uso_elevador_b) {
        total_uso_elevador_medio = total_uso_elevador_c;
    }

    float percentagem_elevador_medio = ((float)total_uso_elevador_medio / moradores) * 100;

    // Imprimir os resultados
    printf("Período mais usado de todos: %c (%d vezes)\n", periodo_mais_usado, total_max);
    printf("Elevador mais frequentado: %c (%d vezes)\n", elevador_mais_frequentado, total_uso_elevador_medio);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagem_elevador_medio);

    
}
