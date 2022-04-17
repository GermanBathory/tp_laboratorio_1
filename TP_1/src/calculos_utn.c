/*
 * calculos_utn.c
 *
 *  Created on: 16 abr 2022
 *      Author: Ger
 */
#include "calculos_utn.h"

/**
* \brief Solicita ingresar un monto y porcentaje de descuento y devuelve el monto total con dicho descuento aplicado.
* \ param montoIngresado Monto que ingresa el usuario.
* \ param descuento Porcentaje de descuento ingresado.
* \ param descuentoTotal Es el monto total que queda luego de aplicar el descuento.
* \return 0 exito.
*/
float utnDescuento (float montoIngresado, float descuento){
if (montoIngresado >= 0 && descuento >= 0) {
float descuentoTotal;
descuentoTotal = montoIngresado - (montoIngresado * descuento/100);
return descuentoTotal;
} else {
	printf("Ingrese valores positivos\n");
}
return 0;
}

	/**
	* \brief Solicita ingresar un monto y porcentaje de interes que se suma y devuelve el monto total con dicho interes aplicado.
	* \ param montoIngresado Monto que ingresa el usuario.
	* \ param interes Porcentaje de interes ingresado.
	* \ param descuentoTotal Es el monto total que queda luego de sumar el interes.
	* \return 0 exito.
	*/
float utnInteres (float montoIngresado, float interes){
if (montoIngresado >= 0 && interes >= 0) {
float descuentoTotal;
descuentoTotal = montoIngresado + (montoIngresado * interes/100);
return descuentoTotal;
} else {
	printf("Ingrese valores positivos\n");
}
return 0;
}

	/**
	* \brief Solicita ingresar un monto y un monto equivalente a valor Bitcoin y devuelve el monto con el pasaje a Bitcoin aplicado.
	* \ param montoIngresado Monto que ingresa el usuario.
	* \ param equivalenteBtc Monto equivalente a Bitcoin.
	* \ param precioEnBtc Es el monto final con el pasaje a Bitcoin aplicado.
	* \return 0 exito.
	*/
float utnPasajeBtc (float montoIngresado, float equivalenteBtc){
if (montoIngresado >= 0 && equivalenteBtc >= 0) {
float precioEnBtc;
precioEnBtc = montoIngresado / equivalenteBtc;
return precioEnBtc;
} else {
	printf("Ingrese valores positivos\n");
}
return 0;
}

	/**
	* \brief Solicita ingresar un precio y cantidad de unidades y devuelve el precio por unidad.
	* \ param precioIngresado Precio que ingresa el usuario.
	* \ param cantidadTotalDeUnidades Cantidad de unidades que ingresa el usuario.
	* \ param precioUnitario Es el precio por unidad.
	* \return 0 exito.
	*/
float utnPrecioUnitario (float precioIngresado, float cantidadTotalDeUnidades){
if (precioIngresado >= 0 && cantidadTotalDeUnidades >= 0) {
float precioUnitario;
precioUnitario = precioIngresado / cantidadTotalDeUnidades;
return precioUnitario;
} else {
	printf("Ingrese valores positivos\n");
}
return 0;
}

	/**
	* \brief Solicita ingresar dos precios y calcula la diferencia entre ellos.
	* \ param primerPrecioIngresado Primer precio que ingresa el usuario.
	* \ param segundoPrecioIngresado Segundo precio que ingresa el usuario.
	* \ param diferenciaPrecios Es la diferencia entre los dos precios ingresados.
	* \return 0 exito.
	*/
float utnDiferenciaEntreDosPrecios (float primerPrecioIngresado, float segundoPrecioIngresado){
if (primerPrecioIngresado >= 0 && segundoPrecioIngresado >= 0) {
float diferenciaPrecios;
diferenciaPrecios = primerPrecioIngresado - segundoPrecioIngresado;
return diferenciaPrecios;
} else {
	printf("Ingrese valores positivos\n");
}
return 0;
}

