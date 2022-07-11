#pragma once
#include <string>


class Empleado {
private:
	int codigo_empleado;
	int dni_empleado;
	std::string nombre_empleado;
	std::string apellido_empleado;
	std::string categoria_empleado;
	bool estado_empleado;
public:
	//declaro gets
	int getcodigo_empleado() { return codigo_empleado; }
	int getdni_empleado() { return dni_empleado; }
	std::string getnombre_empleado() { return nombre_empleado; }
	std::string getapellido_empleado() { return apellido_empleado; }
	bool getestado_empleado() { return estado_empleado; }
	std::string getcagetoria_empleado() { return categoria_empleado; }

	//declaro sets
	void setcodigo_empleado(int CodigoEmpleado) { codigo_empleado = CodigoEmpleado; }
	void setdni_empleado(int Dni) { dni_empleado = Dni; }
	void setnombre_empleado(std::string NombreEmpleado) { nombre_empleado=NombreEmpleado; }
	void setapellido_empleado(std::string ApellidoEmpleado) { apellido_empleado=ApellidoEmpleado; }
	void setcategoria_empleado(std::string Categoria) { categoria_empleado = Categoria; }
	bool setestado_empleado(bool EstadoEmpleado) { estado_empleado = EstadoEmpleado; }

	//grabo
	bool GrabarEmpleado();

	//lee
	bool LeerDiscoEmpleado(int Posicion);

	


};

