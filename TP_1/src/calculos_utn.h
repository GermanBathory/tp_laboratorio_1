/*
 * calculos_utn.h
 *
 *  Created on: 16 abr 2022
 *      Author: Ger
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef CALCULOS_UTN_H_
#define CALCULOS_UTN_H_

float utnDescuento (float montoIngresado, float descuento);

float utnInteres (float montoIngresado, float interes);

float utnPasajeBtc (float montoIngresado, float equivalenteBtc);

float utnPrecioUnitario (float precioIngresado, float cantidadTotalDeUnidades);

float utnDiferenciaEntreDosPrecios (float primerPrecioIngresado, float segundoPrecioIngresado);

#endif /* CALCULOS_UTN_H_ */
