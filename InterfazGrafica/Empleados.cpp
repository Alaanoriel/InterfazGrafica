#include "pch.h"
#include "Empleados.h"

inline void CargarRegistrosEmpleado(Empleado* vec, int cant);
inline int contarRegistrosEmpleados();


inline void CargarRegistrosEmpleado(Empleado* vec, int cant)
{

	for (int i = 0; i < cant; i++)
	{
		vec[i].LeerDiscoEmpleado(i);
	}
}

inline int contarRegistrosEmpleados()
{
	FILE* empleados;
	empleados = fopen("Datos.txt", "rb");
	if (empleados == NULL) return -1;
	fseek(empleados, 0, 2);
	int cant = ftell(empleados);
	return cant / sizeof(Empleado);
}