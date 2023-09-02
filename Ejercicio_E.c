#include <stdio.h>
void asteriscos(int aux){
    for (int i=1; i<=aux; i++) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int aux = 0;
    printf("Hola! Cuantas lineas de asterisco desea que aparezcan? \n");
    scanf("%d",&aux);
    asteriscos(aux);
    return 0;
}
