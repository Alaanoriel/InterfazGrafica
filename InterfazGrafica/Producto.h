#pragma once
#include <string>


class Producto {
private:
	int codigo_producto;
	std::string nombre_producto;
	std::string color_producto;
	std::string marca_producto;
	int talle_producto;
	int stock_producto;
	float precio_producto;
	bool estado_producto;

public:
	//Declaro los get
	int getcodigo_producto() { return codigo_producto; }
	std::string getnombre_producto() { return nombre_producto; }
	std::string getcolor_producto() { return color_producto; }
	int gettalle_producto() { return talle_producto; }
	std::string getmarca_producto() { return marca_producto; }
	int getstock_producto() { return stock_producto; }
	float getprecio_producto() { return precio_producto; }
	bool getestado_producto() { return estado_producto; }

	//Declaro set
	void setcodigo_producto(int CodigoProducto) { codigo_producto = CodigoProducto; }
	void setnombre_producto(std::string NombreProducto) { nombre_producto = NombreProducto; }
	void setcolor_producto(std::string Color) { color_producto = Color; }
	void setmarca_producto(std::string Marca) { marca_producto = Marca; }
	void settalle_producto(int Talle) { talle_producto = Talle; }
	void setstock_producto(int Stock) { stock_producto = Stock; }
	void setprecio_producto(int Precio) { precio_producto = Precio; }
	void setestado_producto(bool Estado) { estado_producto = Estado; }

	//Grabar

	bool GrabarProducto();
	
	/// leeo
	bool LeerDiscoProd(int Posicion);
};