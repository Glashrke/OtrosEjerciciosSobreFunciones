#include <stdio.h>

int cuantosdias(int mes) {
    switch (mes) {
        case 2:
            return 28; 
        case 4:
            return 30;
        case 6:
            return 30;
        case 9:
            return 30;
        case 11:
            return 30; 
        default:
            return 31; 
    }
}

int main() {
    int dias,mes;

    printf("Ingrese un número del 1 al 12 (que representa a un mes) para averiguar cuantos dias lo forman: ");
    scanf("%d", &mes);
    if (mes >= 1 && mes <= 12) {
        dias=cuantosdias(mes);
        printf("El mes que has ingresado tiene %d días.\n",dias);
    } else {
        printf("Número de mes inválido.\n");
    }

    return 0;
}
