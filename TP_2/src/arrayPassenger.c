/*
 * arrayPassenger.c
 *
 *  Created on: 12 may 2022
 *      Author: Ger
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arrayPassenger.h"

int initPassenger(Passenger pArray[], int len) {
	int retorno = -1;
	if (pArray != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			pArray[i].isEmpty = 1;
			retorno = 0;
		}
	}
	return retorno;
}

int incrementarId() {
	static int id = 0000;
	id++;
	return id;
}

int buscarIndexPorIsEmpty(Passenger pArray[], int len) {
	int retorno = -1;

	if (pArray != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			if (pArray[i].isEmpty == 1) {
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int addPassenger(Passenger pArray[], int len) {
	int retorno = -1;
	int indexVacio;
	if (pArray != NULL && len > 0) {
		indexVacio = buscarIndexPorIsEmpty(pArray, len);
		if (indexVacio != -1) {
			printf("Ingrese nombre: \n");
			fflush(stdin);
			scanf("%s", pArray[indexVacio].name);
			printf("Ingrese apellido: \n");
			fflush(stdin);
			scanf("%s", pArray[indexVacio].lastName);
			printf("Ingrese precio del vuelo: \n");
			scanf("%f", &pArray[indexVacio].price);
			printf("Ingrese tipo de pasajero: \n");
			scanf("%d", &pArray[indexVacio].typePassenger);
			printf("Ingrese el codigo de vuelo: \n");
			scanf("%s", pArray[indexVacio].flycode);
			pArray[indexVacio].id = incrementarId();
			pArray[indexVacio].isEmpty = 0;

			mostrarPasajero(pArray[indexVacio]);
			retorno = 0;
		}

	}
	return retorno;
}

void mostrarPasajero(Passenger unPasajero)
{
	if(unPasajero.isEmpty == 0)
	{
		printf("%d , %s , %s , %.2f , %d , %s ", unPasajero.id, unPasajero.name, unPasajero.lastName, unPasajero.price, unPasajero.typePassenger, unPasajero.flycode);
	}
}

int listarPasajero (Passenger pArray[], int len)
{
	int retorno = -1;
	if(pArray != NULL && len >0)
	{
		for(int i = 0; i < len; i++)
		{
			mostrarPasajero(pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}
