#include <stdio.h>
#include <stdlib.h>

void suma(int num1,int num2){
    int aux = 0;
    aux = num1 + num2;
    printf("El resultado es: %d",aux);
}
void resta(int num1,int num2){
    int aux = 0;
    aux = num1-num2;
    printf("El resultado es: %d",aux);

}
float divi(int num1,int num2){
    float auxdivi = 0;  
    auxdivi = num1/num2;
    printf("El resultado es: %.2f",auxdivi);
}

int main (){
    int aux = 0,num1 = 0,num2 = 0,opc = 0;
    float auxdivi = 0;
    printf("Ingrese el 1er numero: \n");
    scanf("%d",&num1);
    printf("Ingrese el 2do numero: \n");
    scanf("%d",&num2);
    printf("Seleccione que operacion necesita realizar: \n1.SUMAR\n2.RESTAR\n3.MULTIPLICAR\n4.DIVIDIR\nTu eleccion: \n");
    scanf("%d",&opc);
	
    switch(opc){
        case 1: 
            suma(num1,num2);
        break;
        case 2: 
            resta(num1,num2);
        break;
        case 3: 
            aux = num1*num2;
            printf("El resultado es: %d",aux);
        break;
        case 4: 
            divi(num1,num2);
        break;
        default: 
            printf("La opcion ingresada no es valida entre las proporcionadas \n");
        break; 
        }
    return 0;
    }


