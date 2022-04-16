/*
 ============================================================================
 Name        : pruebas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float utnDescuento (float montoIngresado, int descuento);

int main(void) {
	setbuf(stdout, NULL);

	float precioIngresado;
	float precioConDescuento;
	int montoDescuento;


	printf("ingrese precio\n");
	scanf("%f", &precioIngresado);

	montoDescuento = 10;

	precioConDescuento = utnDescuento(precioIngresado, montoDescuento);

	printf("El precio con descuento es %.2f", precioConDescuento);

	return 0;
}
	float utnDescuento (float montoIngresado, int descuento){
	int retorno = -1;
	if (montoIngresado >= 0 && descuento >= 0 && retorno == 0) {
	float descuentoTotal;
	descuentoTotal = montoIngresado - (montoIngresado * descuento/100);
	return descuentoTotal;
	} else {
		printf("Ingrese valores positivos\n");
	}
return retorno;
}

