/*
 * biblioteca_utn.h
 *
 *  Created on: 10 abr 2022
 *      Author: Ger
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef BIBLIOTECA_UTN_H_
#define BIBLIOTECA_UTN_H_


int utnGetInt(int *pNumeroIngresado, char *mensaje, char *mensajeError,
		int maximo, int minimo, int maximoDeReintentos);

float utnGetFloat(float *pNumeroIngresado, char *mensaje, char *mensajeError,
		int maximo, int minimo, int maximoDeReintentos);


#endif /* BIBLIOTECA_UTN_H_ */
