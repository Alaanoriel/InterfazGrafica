#include "pch.h"
#include <iostream>
#include <cstdio>
#include "Producto.h"
#include "Venta.h"

int contarRegistrosVentas();
void cargarRegistroVentas(Venta* ,int cant);

/// Gets
Producto* Venta::get_producto() { return producto; }

float Venta::get_importe(){ return importe; }

int Venta::get_metodo_pago(){ return metodo_pago; }

int Venta::get_ID_Venta(){ return ID_venta; }

int Venta::get_ID_Empleado(){ return ID_Empleado; }

// Sets
void Venta::set_producto(Producto* prod,int cant)
{
	for (int i = 0; i < cant; i++) producto[i] = prod[i];
}

void Venta::set_importe(float imp){ importe = imp; }

void Venta::set_metodo_pago(int metodo) { metodo_pago = metodo; }

void Venta::set_ID_Venta(int ID) { ID_venta = ID; }

void Venta::set_ID_Empleado(int ID) { ID_Empleado = ID; }

//Metodos de guardado y lectura de archivos
bool Venta::guardar()
{
	FILE* ventas;
	ventas = fopen("Ventas.txt", "ab");
	if (ventas == NULL) return false;
	bool leyo = fwrite(this, sizeof * this, 1, ventas);
	fclose(ventas);
	return leyo;
}

bool Venta::leer(int pos)
{
	FILE* ventas;
	ventas = fopen("Ventas.txt", "rb");
	if (ventas == NULL) return false;
	fseek(ventas, pos * sizeof * this, 0);
	bool leyo = fread(this, sizeof * this, 1, ventas);
	fclose(ventas);
	return leyo;
}


//Funciones globales



inline int contarRegistrosVentas()
{
	FILE* ventas;
	ventas = fopen("Ventas.txt", "rb");
	if (ventas == NULL) return -1;
	fseek(ventas, 0, 2);
	int cant = ftell(ventas);
	fclose(ventas);
	return cant / sizeof(Venta);
}

inline void cargarRegistroVentas(Venta* vec,int cant)
{
	for (int i = 0; i < cant; i++) vec[i].leer(i);
}
