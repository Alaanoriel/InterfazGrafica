#pragma once
#include <string>


class Producto {
private:
	int codigo_producto;
	char nombre_producto[50];
	char color_producto[50];
	char marca_producto[15];
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
	char* getmarca_producto() { return marca_producto; }
	int getstock_producto() { return stock_producto; }
	float getprecio_producto() { return precio_producto; }
	bool getestado_producto() { return estado_producto; }

	//Declaro set
	void setcodigo_producto(int CodigoProducto) { codigo_producto = CodigoProducto; }
	void setnombre_producto(std::string NombreProducto) { strcpy(nombre_producto, NombreProducto.c_str()); }
	void setcolor_producto(std::string Color) { strcpy(color_producto, Color.c_str()); }
	void setmarca_producto(std::string Marca) { strcpy(marca_producto, Marca.c_str()); }
	void settalle_producto(int Talle) { talle_producto = Talle; }
	void setstock_producto(int Stock) { stock_producto = Stock; }
	void setprecio_producto(int Precio) { precio_producto = Precio; }
	void setestado_producto(bool Estado) { estado_producto = Estado; }

	//Grabar

	bool GrabarProducto();
	
	/// leeo
	bool LeerDiscoProd(int Posicion);

	bool guardarProdModificado(int pos);
};