#include "pch.h"
#include <iostream>
#include "Producto.h"


int BuscarProducto(int Codigo);
int contarProductos();
void cargarRegistroProductos(Producto *vec, int cant);
bool modificarStockProducto(int ID, int stock);

/// Metodos de la clase "Producto"

inline bool Producto::GrabarProducto()
{
		FILE* GProducto;
		GProducto = fopen("Archivos/Productos.txt", "ab");
		if (GProducto == NULL) return false;

		bool escribio = fwrite(this, sizeof * this, 1, GProducto);
		fclose(GProducto);
		return escribio;
}

inline bool Producto::LeerDiscoProd(int Posicion)
{
	FILE* GProducto;
	GProducto = fopen("Archivos/Productos.txt", "rb");
	if (GProducto == NULL) return 0;

	fseek(GProducto, Posicion * sizeof * this, 0);
	bool leyo = fread(this, sizeof * this, 1, GProducto);
	fclose(GProducto);
	return leyo;
}

inline bool Producto::guardarProdModificado(int pos)
{
	FILE* P;
	P = fopen("Archivos/Productos.txt", "rb+");
	if (P == NULL)return false;
	fseek(P, pos * sizeof(*this), 0);
	bool leyo = fwrite(this, sizeof(*this), 1, P);
	fclose(P);
	return leyo;
}





///FUNCIONES GLOBALES

inline int BuscarProducto(int Codigo)
{
	Producto obj;
	int pos = 0;
	while (obj.LeerDiscoProd(pos++)) {
		if (obj.getcodigo_producto() == Codigo) return pos;
	}
	return -1;
}

inline int contarProductos()
{
	FILE* Producto;
	Producto = fopen("Productos.dat", "rb");
	if (Producto == NULL) return -1;
	fseek(Producto, 0, 2);
	int cant = ftell(Producto);
	fclose(Producto);
	return cant / sizeof(Producto);
}

inline void cargarRegistroProductos(Producto* vec, int cant)
{
	for (int i = 0; i < cant; i++)
	{
		vec[i].LeerDiscoProd(i);
	}
}

inline bool modificarStockProducto(int ID, int stock)
{
	Producto obj;
	int pos = BuscarProducto(ID);
	if(pos == -1)return false;
	obj.LeerDiscoProd(pos);
	obj.setstock_producto(stock);
	if (obj.guardarProdModificado(pos)) return true;
	return false;
}



