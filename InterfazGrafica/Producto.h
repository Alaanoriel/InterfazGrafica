#pragma once



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

	bool GrabarProducto();
	
	/// leeo
	bool LeerDiscoProd(int Posicion);

};