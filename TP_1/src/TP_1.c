/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_utn.h"

int utnGetInt(int *pNumeroIngresado, char *mensaje, char *mensajeError,
		int maximo, int minimo, int maximoDeReintentos);
float utnGetFloat(float *pNumeroIngresado, char *mensaje, char *mensajeError,
		int maximo, int minimo, int maximoDeReintentos);

int main(void) {
	setbuf(stdout, NULL);

	int validacionRetorno;
	float kilometrosIngresados;
	float precioIngresadoLatam;
	float precioIngresadoAerolineas;
	int opcionDelMenu;
	float pagaConDebitoAerolineas;
	float pagaConDebitoLatam;
	float pagaConCreditoAerolineas;
	float pagaConCreditoLatam;
	float pagaConBitcoinAerolineas;
	float pagaConBitcoinLatam;
	float precioPorKmAerolineas;
	float precioPorKmLatam;
	float diferenciaDePrecios;
	int flagKilometrosIngresados = 0;
	int flagPreciosIngresados = 0;
	int flagCalculosRealizados = 0;

	do {
		printf("Menu de opciones\n\n");
		printf("1. Ingresar Kilometros: %.2f\n", kilometrosIngresados);
		printf("2. Ingresar Precio de Vuelos: (Aerolineas, Latam)\n - Precio vuelo Aerolineas: %.2f\n - Precio vuelo Latam: %.2f\n",precioIngresadoAerolineas,precioIngresadoLatam);
		printf("3. Calcular todos los costos:\n a) Tarjeta de debito (10%% de descuento )\n b) Tarjeta de credito (25%% de interes)\n c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n d) Mostrar precio por km (precio unitario)\n e) Mostrar diferencia de precio ingresada (Latam - Aerolineas)\n");
		printf("4. Informar Resultados\n Latam:\n a) Precio con tarjeta de debito: r\n b) Precio con tarjeta de credito: r\n c) Precio pagando con bitcoin : r\n d) Precio unitario: r\n Aerolineas:\n a) Precio con tarjeta de debito: r\n b) Precio con tarjeta de credito: r\n c) Precio pagando con bitcoin : r\n d) Precio unitario: r\n La diferencia de precio es : r\n");
		printf("5. Carga forzada de datos\n");
		printf("6. Salir\n");

		validacionRetorno = utnGetInt(&opcionDelMenu,
				"Ingrese la opcion que quiera:\n", "La opcion es incorrecta:\n",
				6, 1, 1);
		if (validacionRetorno == 0) {

			switch (opcionDelMenu) {
			case 1:
				if (validacionRetorno == 0) {
					validacionRetorno = utnGetFloat(&kilometrosIngresados,"Ingrese los kilometros:\n","El valor es incorrecto:\n", 999999999, 0, 2);
					printf("%.2f \n", kilometrosIngresados);
					flagKilometrosIngresados = 1;
					} else {
						printf("El valor no fue ingresado bien\n");
					}
				break;
			case 2:
					if (validacionRetorno == 0) {
					validacionRetorno = utnGetFloat(&precioIngresadoAerolineas, "Ingrese precio del vuelo por Aerolineas:\n", "El precio es incorrecto:\n",99999999, 0, 2);
					printf("%.2f \n", precioIngresadoAerolineas);

					validacionRetorno = utnGetFloat(&precioIngresadoLatam, "Ingrese precio del vuelo por Latam:\n", "El precio es incorrecto:\n",99999999, 0, 2);
					printf("%.2f \n", precioIngresadoLatam);
					flagPreciosIngresados = 1;
				} else {
					printf("El precio no fue ingresado bien.\n");
				}
				break;
			case 3:
				if (flagKilometrosIngresados == 0 || flagPreciosIngresados == 0 || kilometrosIngresados == 0){
					printf("Primero ingrese kilometros / precios y que sean distino de cero.\n");
				    } else {
					pagaConDebitoAerolineas = precioIngresadoAerolineas - (precioIngresadoAerolineas * 0.1);
					pagaConDebitoLatam = precioIngresadoLatam - (precioIngresadoLatam * 0.1);
					pagaConCreditoAerolineas = precioIngresadoAerolineas + (precioIngresadoAerolineas * 0.25);
				    pagaConCreditoLatam = precioIngresadoLatam + (precioIngresadoLatam * 0.25);
				    pagaConBitcoinAerolineas = precioIngresadoAerolineas / 4606954.55;
				    pagaConBitcoinLatam = precioIngresadoLatam / 4606954.55;
				    if (kilometrosIngresados != 0){
				    	precioPorKmAerolineas = precioIngresadoAerolineas / kilometrosIngresados;
				    	precioPorKmLatam = precioIngresadoLatam / kilometrosIngresados;
				    } else {
				    	precioPorKmAerolineas = 0;
				    	precioPorKmLatam = 0;
				    }
				    if (precioIngresadoAerolineas > precioIngresadoLatam){
				    diferenciaDePrecios = precioIngresadoAerolineas - precioIngresadoLatam;
				      } else {
				    	diferenciaDePrecios = precioIngresadoLatam - precioIngresadoAerolineas;
				    }

				    printf("Se realizaron las operaciones. Presione 4 para el informe de resultados.\n");
				    flagCalculosRealizados = 1;
				    }

					break;

					case 4:
						if (flagCalculosRealizados == 0){
						printf("Primero realice calculos.\n");
						} else {
					printf("4. Resultados\n Latam:\n a) Precio con tarjeta de debito: $%.2f\n b) Precio con tarjeta de credito: $%.2f\n c) Precio pagando con bitcoin: %.4f BTC\n d) Precio unitario: $%.2f\n Aerolineas:\n a) Precio con tarjeta de debito: $%.2f\n b) Precio con tarjeta de credito: $%.2f\n c) Precio pagando con bitcoin : %.4f BTC\n d) Precio unitario: $%.2f\n La diferencia de precio es: $%.2f\n\n", pagaConDebitoLatam, pagaConCreditoLatam, pagaConBitcoinLatam, precioPorKmLatam, pagaConDebitoAerolineas, pagaConCreditoAerolineas, pagaConBitcoinAerolineas, precioPorKmAerolineas, diferenciaDePrecios);
						}
					break;
					case 5:
						pagaConDebitoAerolineas = 162965 - (162965 * 0.1);
						pagaConDebitoLatam = 159339 - (159339 * 0.1);
						pagaConCreditoAerolineas = 162965 + (162965 * 0.25);
						pagaConCreditoLatam = 159339 + (159339 * 0.25);
						pagaConBitcoinAerolineas = 162965 / 4606954.55;
						pagaConBitcoinLatam = 159339 / 4606954.55;
						precioPorKmAerolineas = 162965 / (float)7090;
						precioPorKmLatam = 159339 / (float)7090;
						diferenciaDePrecios = 162965 - 159339;
					printf("Kms Ingresados: 7090 km\n\n Precio Aerolineas: $162965 \n a) Precio con tarjeta de debito: $%.2f\n b) Precio con tarjeta de credito: $%.2f\n c) Precio pagando con bitcoin : %.4f BTC\n d) Precio unitario: $%.2f\n\n Precio Latam: $159339\n a) Precio con tarjeta de debito: $%.2f\n b) Precio con tarjeta de credito: $%.2f\n c) Precio pagando con bitcoin: %.4f BTC\n d) Precio unitario: $%.2f\n\n La diferencia de precio es: $%.2f\n\n", pagaConDebitoAerolineas, pagaConCreditoAerolineas, pagaConBitcoinAerolineas, precioPorKmAerolineas, pagaConDebitoLatam, pagaConCreditoLatam, pagaConBitcoinLatam, precioPorKmLatam, diferenciaDePrecios);
					break;
					case 6:
						printf("Sale del sistema.\n");
						break;
				}
			}
		}
	 while (opcionDelMenu != 6);
return 0;
}
