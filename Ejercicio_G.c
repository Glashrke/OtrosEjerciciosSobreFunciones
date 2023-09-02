#include <stdio.h>
#include <stdlib.h>
void osa(int uni,float precio){
	if(uni > 6 && uni <=12){
		float aux = 0;
		aux = precio*0.04;
		precio = precio - aux;
		printf("El precio con descuento queda de la siguiente manera: %.2f",precio);
		
	}else if(uni > 12){
		float aux = 0;
		aux = precio*0.10;
		precio = precio - aux;
		printf("El precio con descuento queda de la siguiente manera: %.2f",precio);
	}
	
}

int main(){
	int uni=0;
	float precio=0,aux=0;
	printf("Ingrese las unidades a comprar: \n");
	scanf("%d",&uni);
	printf("Ingrese el precio total a pagar: \n");
	scanf("%f",&precio);
	
	osa(uni,precio);
	
	return 0;
}
