#include <bits/stdc++.h>

using namespace std;

class Vehiculo{
	protected:
		string numeroPlaca;
		string color;
		string marca;
		int velocimetro;
	public:
		Vehiculo(string, string, string, int);
		void mostrarDatos();
		void cambiarVelocidad(int);
};

Vehiculo::Vehiculo(string nump, string c, string m, int ve)
{
	numeroPlaca = nump;
	color = c;
	marca = m;
	velocimetro = ve;
}

void Vehiculo::mostrarDatos()
{
	
	cout<<"El automovil tiene la placa "<<numeroPlaca<<"  y es de color "<<color<<endl;
	cout<<"La marca del automovil es "<<marca<<" y tiene un velocimetro de "<<velocimetro<<endl;
}

void Vehiculo::cambiarVelocidad(int _velocimetro)
{
	
	cout<<"La nueva velocidad es "<<_velocimetro<<endl;
}

class Automovil: public Vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		Automovil(int, int);
		void mostrarAutomovil();
		void subirPasajeros(int);
		void bajarPasajeros(int);
};
Automovil::Automovil(int _cantidadPuertas, int _cantidadPasajeros) : Vehiculo(numeroPlaca, color, marca, velocimetro)
{
	cantidadPuertas = _cantidadPuertas;
	cantidadPasajeros = _cantidadPasajeros;
}

void Automovil::mostrarAutomovil()
{
	cout<<"El automovil tiene "<<cantidadPuertas<<" y puede tener "<<cantidadPasajeros<<endl;
}

void Automovil::subirPasajeros(int subir)
{
	cout<<"Se subieron "<<subir<<" pasajeros. "<<endl;
}

void Automovil::bajarPasajeros(int bajar)
{
	cout<<"Se bajaron "<<bajar<<" pasajeros. "<<endl;
}

class Camion : public Vehiculo{
	private:
		string carga;
	public:
		Camion(string);
		void mostrarCamion();
		void cambiarCarga(string);
};

Camion::Camion(string _carga) : Vehiculo(numeroPlaca, color, marca, velocimetro)
{
	carga = _carga;
}

void Camion::mostrarCamion()
{
	cout<<"El camion tiene una carga de "<<carga<<endl;
	
}

void Camion::cambiarCarga(string cambioCarga)
{
	string _cambioCarga;
	
	carga = _cambioCarga;
	
	cout<<"La nueva carga del camion es "<<_cambioCarga<<endl;
}


int main()
{
//	int velocidad;
	Vehiculo v("J18-123", "azul", "Nissan", 50);
	v.mostrarDatos(); cout<<endl;
//	cout<<"Ingrese la nueva velocidad: "; cin>>velocidad;
	v.cambiarVelocidad(100);
	
//	int subir, bajar;
	Automovil a(2, 20);
	a.mostrarAutomovil();
//	cout<<"Ingrese la cantidad de pasajeros que subieron: "; cin>>subir;
	a.subirPasajeros(50);
//	cout<<"Ingrese la cantidad de pasajeros que bajaron: "; cin>>bajar;
	a.bajarPasajeros(100);
	
//	string cambio;
	Camion c("paquetes");
	c.mostrarCamion();
//	cout<<"Ingrese el nuevo cambio de carga: "; getline(cin, cambio);
	c.cambiarCarga("cajas");
	
	return 0;
}
