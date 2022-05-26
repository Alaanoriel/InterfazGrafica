#pragma once
#include <iostream>
using namespace std;


class Producto {
private:
	int codigo_producto;
	char nombre_producto[30];
	char color_producto[15];
	int talle_producto;
	int stock_producto;
	float precio_producto;
	bool estado_producto;

public:
	//Declaro los get
	int getcodigo_producto() { return codigo_producto; }
	char* getnombre_producto() { return nombre_producto; }
	char* getcolor_producto() { return color_producto; }
	int gettalle_producto() { return talle_producto; }
	int getstock_producto() { return stock_producto; }
	float getprecio_producto() { return precio_producto; }
	bool getestado_producto() { return estado_producto; }

	//Declaro set
	void setcodigo_producto(int CodigoProducto) { codigo_producto = CodigoProducto; }
	void setnombre_producto(char* NombreProducto) { strcpy(nombre_producto,NombreProducto); }
	void setcolor_producto(char* Color) { strcpy(color_producto, Color); }
	void settalle_producto(int Talle) { talle_producto = Talle; }
	void setstock_producto(int Stock) { stock_producto = Stock; }
	void setprecio_producto(int Precio) { precio_producto = Precio; }
	void setestado_producto(bool Estado) { estado_producto = Estado; }

	//Grabar

	bool GrabarProducto()
	{
		FILE* GProducto;
		GProducto = fopen("Productos.dat", "ab");
		if(GProducto== NULL)
		{
			return false;
		}
		
		fwrite(this, sizeof * this, 1,GProducto);
		fclose(GProducto);
		return true;
	
	}

	int LeerDiscoProd(int Posicion)
	{
		int x;
		FILE* GProducto;
		GProducto = fopen("Productos.dat", "rb");
		if(GProducto == NULL)
		{
			return 0;
		}

		fseek(GProducto, Posicion * sizeof * this, 0);
		x = fread(this, sizeof * this, 1, GProducto);
		fclose(GProducto);
		return x;
	}






	//busco producto
	int BuscarProducto(int Codigo) {
		int i = 0;
		int pos = 0;
		FILE* GProducto;
		GProducto = fopen("Productos.dat", "rb");
		if (GProducto == NULL) {
			return -1;
		}
		while (LeerDiscoProd(pos++)) {
			if (codigo_producto == Codigo) {
				fclose(GProducto);
				return i;
			}
			i++;
		}
		fclose(GProducto);
		return -1;
	}




};