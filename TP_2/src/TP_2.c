/*
 ============================================================================
 Name        : TP_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arrayPassenger.h"
#include "biblioteca_utn.h"

#define LEN_PASAJEROS 2000

int main(void) {
	setbuf(stdout, NULL);

	int opcionMenu;
	int idABuscar;
	Passenger pasajeros[LEN_PASAJEROS];

	do {

		printf(">>>>>>>>>>>>>>> MENU DE OPCIONES <<<<<<<<<<<<<<<\n\n");
		printf("1. ALTA. Ingresar pasajero. \n");
		printf("2. MODIFICAR. Cambiar datos de pasajero. \n");
		printf("3. BAJA. Eliminar pasajero. \n");
		printf("4. INFORMAR. \n");
		printf("5. SALIR: \n");
		printf("Eliga la opcion correspondiente: \n");
		scanf("%d", &opcionMenu);
		switch (opcionMenu) {
		case 1:
			if (addPassenger(pasajeros, LEN_PASAJEROS) == 0) {
				printf("Pasajero cargado.\n\n");
			} else {
				printf("Pasajero no cargado.\n");
			}
			break;
		case 2:
			printf("Ingrese el numero de id del asociado que quiere modificar. \n");
			scanf("%d", &idABuscar);
			modificarPasajero(pasajeros, LEN_PASAJEROS, idABuscar);
			break;
		case 3:
			printf("Ingrese el numero de id del asociado que quiere eliminar. \n");
			scanf("%d", &idABuscar);
			removePassenger(pasajeros, LEN_PASAJEROS, idABuscar);
			printf("Esta hecho. \n");
			break;
		}

	} while (opcionMenu != 5);
	return 0;
}
