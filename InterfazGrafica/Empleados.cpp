#include "pch.h"
#include <iostream>
#include "Empleados.h"

void CargarRegistrosEmpleado(Empleado* vec, int cant);
int contarRegistrosEmpleados();
int BuscarEmpleado(int Codigo);
bool BajaLogicaEmpleado(int Codigo);

///METODOS EMPLEADO 
///(Antepuestos de "inline" para que funcionen globalmente)


 


inline bool Empleado::LeerDiscoEmpleado(int Posicion)
{
	bool x;
	FILE* Empleado;
	Empleado = fopen("Archivos/Empleados.txt", "rb");
	if (Empleado == NULL)
	{
		return 0;
	}
	fseek(Empleado, Posicion * sizeof(*this), 0);
	x = fread(this, sizeof(*this), 1, Empleado);
	fclose(Empleado);
	return x;
}

inline bool Empleado::guardarEmpleadoModificado(int pos)
{
	FILE* P;
	P = fopen("Archivos/Empleados.txt", "rb+");
	if(P==NULL) return false;
	fseek(P, pos * sizeof(*this), 0);
	bool guardo = fwrite(this, sizeof(*this), 1, P);
	fclose(P);
	return guardo;
}



inline bool Empleado::GrabarEmpleado()
{
	FILE* Empleado;
	Empleado = fopen("Archivos/Empleados.txt", "ab");
	if (Empleado == NULL)
	{
		return false;
	}

	fwrite(this, sizeof * this, 1, Empleado);
	fclose(Empleado);
	return true;

}






/// FUNCIONES GLOBALES
///(Antepuestos de "inline" para que funcionen globalmente)
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

inline int BuscarEmpleado(int Codigo)
{
	Empleado obj;
	int pos = 0;
	while (obj.LeerDiscoEmpleado(pos++))
	{
		if (obj.getcodigo_empleado() == Codigo) return pos;
	}
	return -1;
}

inline bool BajaLogicaEmpleado(int Codigo)
{
	Empleado obj;
	int pos = BuscarEmpleado(Codigo);
	if (pos == -1) return false;
	obj.LeerDiscoEmpleado(pos);
	obj.setestado_empleado(false);
	if(obj.guardarEmpleadoModificado(pos))return true;
	return false;
}

