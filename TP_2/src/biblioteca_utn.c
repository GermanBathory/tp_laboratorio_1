/*
 * biblioteca_utn.c
 *
 *  Created on: 10 abr 2022
 *      Author: Ger
 */
#include "biblioteca_utn.h"
#include "arrayPassenger.h"

int listarPasajero(Passenger pArray[], int len) {
	int retorno = -1;
	if (pArray != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			mostrarPasajero(pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}

int utnGetInt(int *pNumeroIngresado, char *mensaje, char *mensajeError,
		int maximo, int minimo, int maximoDeReintentos) {

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if (pNumeroIngresado != NULL && maximo >= minimo
			&& maximoDeReintentos >= 0) {
		do {
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if (auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo) {
				*pNumeroIngresado = auxNumeroIngresado;
				retorno = 0;
				break;
			} else {
				printf("%s", mensajeError);
			}

		} while (maximoDeReintentos > 0);
	}

	return retorno;
}

float utnGetFloat(float *pNumeroIngresado, char *mensaje, char *mensajeError,
		int maximo, int minimo, int maximoDeReintentos) {

	float auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if (pNumeroIngresado != NULL && maximo >= minimo
			&& maximoDeReintentos >= 0) {
		do {
			printf("%s", mensaje);
			scanf("%f", &auxNumeroIngresado);
			maximoDeReintentos--;

			if (auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo) {
				*pNumeroIngresado = auxNumeroIngresado;
				retorno = 0;
				break;
			} else {
				printf("%s", mensajeError);
			}

		} while (maximoDeReintentos > 0);
	}

	return retorno;
}
