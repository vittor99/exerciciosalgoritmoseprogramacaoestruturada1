#include <stdio.h>

int main() {
    char continuar;
    
    do {
        int mes, ano, dias_no_mes;
        
        // Solicita o mês e o ano ao usuário
        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);
        
        if (mes < 1 || mes > 12) {
            printf("Mês inválido. O mês deve estar entre 1 e 12.\n");
            continue;
        }
        
        printf("Digite o ano: ");
        scanf("%d", &ano);
        
        // Verifica se o ano é bissexto
        int bissexto = 0;
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            bissexto = 1;
        }
        
        // Determina o número de dias no mês
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dias_no_mes = 31;
                break;
            case 4: case 6: case 9: case 11:
                dias_no_mes = 30;
                break;
            case 2:
                dias_no_mes = bissexto ? 29 : 28;
                break;
            default:
                dias_no_mes = -1; // Mês inválido
        }
        
        // Verifica se o mês informado é válido
        if (dias_no_mes == -1) {
            printf("Mês inválido. Tente novamente.\n");
            continue;
        }
        
        // Imprime o número de dias no mês/ano informado
        printf("O mês %d/%d tem %d dias.\n", mes, ano, dias_no_mes);
        
        // Solicita se o usuário deseja continuar
        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    
}
