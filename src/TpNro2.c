/*
 ============================================================================
 Name        : TpNro2.c
 Author      : Maiorano Diego
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Empleados.h"
#include "utn.h"
#define CANTIDAD_EMPLEADOS 1000
int main(void) {
	setbuf(stdout,NULL);
	int opcionMenu;
	Empleado* empleados[CANTIDAD_EMPLEADOS];

	emp_initArray(empleados, CANTIDAD_EMPLEADOS);

		do{
	if(get_int(&opcionMenu, 3, "|||  MENU   |||\n"
								"1)ALTA DE EMPLEADO\n"
								"2)MODIFICACION DE EMPLEADO\n"
								"3)BAJA DE EMPLEADO\n"
								"4)INFORME\n"
								"5)IMPRIMIR(DEBUG)\n"
								"6)SALIR\n", "Opcion Incorrecta.\n", 1, 6, 2, 0))
	{
			switch(opcionMenu)
			{
				case 1:
					emp_altaEmpleado(empleados, CANTIDAD_EMPLEADOS);
					break;
				case 2:
					emp_modificarEmpleado(empleados, CANTIDAD_EMPLEADOS);
					break;
				case 3:
					emp_eliminarEmpleado(empleados, CANTIDAD_EMPLEADOS);
					break;
				case 4:
					emp_subMenu(empleados, CANTIDAD_EMPLEADOS);
					break;
				case 5:
					emp_listarEmpleados(empleados, CANTIDAD_EMPLEADOS);
					break;
			}
	}
		}while(opcionMenu != 6);
		printf("Saliendo... Gracias vuelva prontos!.");
	return EXIT_SUCCESS;
}
