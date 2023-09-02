#include <stdio.h>
#include <stdlib.h>
void restar(int num){
    int aux=0;
    aux=(num*num)-(num * 2);
    printf("\n\nEl resultado de la resta es: %d",aux);
}

int main(){
    int num,aux;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);

    restar(num);

    return 0;
}