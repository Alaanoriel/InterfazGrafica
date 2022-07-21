#pragma once
class Venta
{
private:
	Producto* producto;
	float importe;
	int metodo_pago;
	int ID_venta;
	int ID_Empleado;
public:
	Producto* get_producto();
	float get_importe();
	int get_metodo_pago();
	int get_ID_Venta();
	int get_ID_Empleado();

	/// Declaracion de constructor
	Venta(int cant);

	void set_producto(Producto* prod, int cant);
	void set_importe(float importe);
	void set_metodo_pago(int metodo);
	void set_ID_Venta(int ID);
	void set_ID_Empleado(int ID);

	bool guardar();
	bool leer(int pos);

	///destructor
	~Venta()
	{
		delete(producto);
	}
};

