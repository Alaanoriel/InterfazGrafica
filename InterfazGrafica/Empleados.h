#pragma once
#include <string>


class Empleado {
private:
	int codigo_empleado;
	int dni_empleado;
	char nombre_empleado[50];
	char apellido_empleado[50];
	char categoria_empleado[10];
	bool estado_empleado;
public:
	//declaro gets
	int getcodigo_empleado() { return codigo_empleado; }
	int getdni_empleado() { return dni_empleado; }
	/*std::string*/char* getnombre_empleado() { return nombre_empleado; }
	/*std::string*/ char* getapellido_empleado() { return apellido_empleado; }
	bool getestado_empleado() { return estado_empleado; }
	/*std::string*/ char* getcagetoria_empleado() { return categoria_empleado; }

	//declaro sets
	void setcodigo_empleado(int CodigoEmpleado) { codigo_empleado = CodigoEmpleado; }
	void setdni_empleado(int Dni) { dni_empleado = Dni; }
	void setnombre_empleado(std::string NombreEmpleado) { strcpy(nombre_empleado , NombreEmpleado.c_str()); }
	void setapellido_empleado(std::string ApellidoEmpleado) { strcpy(apellido_empleado , ApellidoEmpleado.c_str()); }
	void setcategoria_empleado(std::string Categoria) { strcpy(categoria_empleado , Categoria.c_str()); }
	bool setestado_empleado(bool EstadoEmpleado) { estado_empleado = EstadoEmpleado; }

	//grabo
	bool GrabarEmpleado();

	//lee
	bool LeerDiscoEmpleado(int Posicion);

	


};

