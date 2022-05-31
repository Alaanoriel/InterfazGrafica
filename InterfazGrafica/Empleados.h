#pragma once
#include <iostream>
using namespace std;

class Empleado {
private:
	int codigo_empleado;
	int dni_empleado;
	char nombre_empleado[20];
	char apellido_empleado[20];
	char categoria_empleado[1];
	bool estado_empleado;
public:
	//declaro gets
	int getcodigo_empleado() { return codigo_empleado; }
	int getdni_empleado() { return dni_empleado; }
	char* getnombre_empleado() { return nombre_empleado; }
	char* getapellido_empleado() { return apellido_empleado; }
	bool getestado_empleado() { return estado_empleado; }
	char* getcagetoria_empleado() { return categoria_empleado; }

	//declaro sets
	void setcodigo_empleado(int CodigoEmpleado) { codigo_empleado = CodigoEmpleado; }
	void setdni_empleado(int Dni) { dni_empleado = Dni; }
	void setnombre_empleado(char* NombreEmpleado) { strcpy(nombre_empleado, NombreEmpleado); }
	void setapellido_empleado(char* ApellidoEmpleado) { strcpy(apellido_empleado, ApellidoEmpleado); }
	void setcategoria_empleado(char* Categoria) { strcpy(categoria_empleado, Categoria); }
	bool setestado_empleado(bool EstadoEmpleado) { estado_empleado = EstadoEmpleado; }

	//grabo
	bool GrabarEmpleado()
	{
		FILE* Empleado;
		Empleado = fopen("Empleados.dat", "ab");
		if (Empleado == NULL)
		{
			return false;
		}

		fwrite(this, sizeof * this, 1, Empleado);
		fclose(Empleado);
		return true;

	}

	//lee
	int LeerDiscoEmpleado(int Posicion)
	{
		int x;
		FILE* Empleado;
		Empleado = fopen("Empleados.dat", "rb");
		if (Empleado == NULL)
		{
			return 0;
		}

		fseek(Empleado, Posicion * sizeof * this, 0);
		x = fread(this, sizeof * this, 1, Empleado);
		fclose(Empleado);
		return x;
	}
		

	int BuscarEmpleado(int Codigo) {
		int i = 0;
		int pos = 0;
		FILE* Empleado;
		Empleado = fopen("Empleados.dat", "rb");
		if (Empleado == NULL) {
			return -1;
		}
		while (LeerDiscoEmpleado(pos++)) {
			if (codigo_empleado == Codigo) {
				fclose(Empleado);
				return i;
			}
			i++;
		}
		fclose(Empleado);
		return -1;
	}











};