/*
 * arrayPassenger.h
 *
 *  Created on: 12 may 2022
 *      Author: Ger
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

typedef struct {
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
} Passenger;

int initPassenger(Passenger pArray[], int len);
int addPassenger(Passenger pArray[], int len);
int findPassengerById(Passenger listPasajeros[], int len, int idPass);
int removePassenger(Passenger listPasajeros[], int len, int idPass);
int buscarIndexPorIsEmpty(Passenger pArray[], int len);
void mostrarPasajero(Passenger unPasajero);
int modificarPasajero(Passenger listPasajeros[], int len, int idPass);

#endif /* ARRAYPASSENGER_H_ */
