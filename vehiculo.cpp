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
	
	cout<<"\nEl vehiculo con la placa "<<numeroPlaca<<" es de color "<<color<<". "<<endl;
	cout<<"Se trata de un "<<marca<<" con un velocimetro que marca hasta "<<velocimetro<<" km/h.\n"<<endl;
	
}

void Vehiculo::cambiarVelocidad(int nuevaVelocidad)
{
	velocimetro = nuevaVelocidad;
	
	cout<<"\nEl vehiculo con la placa "<<numeroPlaca<<" de color "<<color<<", "<<endl;
	cout<<"con la marca "<<marca<<" ha alcanzado una nueva velocidad de"<<velocimetro<<" km/h.\n"<<endl;
}

class Automovil: public Vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		Automovil(string, string, string, int, int, int);
		void mostrarAutomovil();
		void subirPasajeros(int);
		void bajarPasajeros(int);
};
Automovil::Automovil(string nump, string c, string m, int ve, int _cantidadPuertas, int _cantidadPasajeros) : Vehiculo(nump, c, m, ve)
{
	cantidadPuertas = _cantidadPuertas;
	cantidadPasajeros = _cantidadPasajeros;
}

void Automovil::mostrarAutomovil()
{
	cout<<"El automovil tiene "<<cantidadPuertas<<" puertas y tiene "<<cantidadPasajeros<<" pasajeros.\n "<<endl;
}

void Automovil::subirPasajeros(int subir)
{
	cantidadPasajeros+=subir;
	cout<<"\nSe subieron "<<subir<<" pasajeros, dentro del automovil hay "<<cantidadPasajeros<<" pasajeros en total.\n "<<endl;
}

void Automovil::bajarPasajeros(int bajar)
{
	cantidadPasajeros-=bajar;
	cout<<"\nSe bajaron "<<bajar<<" pasajeros, dentro del automovil hay "<<cantidadPasajeros<<" pasajeros en total.\n "<<endl;
}

class Camion : public Vehiculo{
	private:
		string carga;
	public:
		Camion(string, string, string, int, string);
		void mostrarCamion();
		void cambiarCarga(string);
};

Camion::Camion(string nump, string c, string m, int ve, string _carga) : Vehiculo(nump, c, m, ve)
{
	carga = _carga;
}

void Camion::mostrarCamion()
{
	cout<<"El camion tiene una carga de "<<carga<<".\n"<<endl;
	
}

void Camion::cambiarCarga(string cambioCarga)
{

	carga = cambioCarga;
	
	cout<<"\nLa nueva carga del camion es "<<carga<<"."<<endl;
}


int main()
{
	int opc;	
	string placa, color, marca;
	int velocidad, nuevaVelocidad;
	do
	{
		system("cls");
		cout<<"VEHICULO - TRANSPORTE"<<endl;
		cout<<"1. Vehiculo "<<endl;
		cout<<"2. Automovil "<<endl;
		cout<<"3. Camion "<<endl;
		cout<<"4. Salir del programa "<<endl;
		
		cout<<"Ingrese una opcion: "; cin>>opc;
		
		switch(opc)
		{
			case 1: 
			{
				system("cls");
				cout<<"\nVEHICULO\n"<<endl;
				cout<<"Ingrese el numero de placa del vehiculo: "; fflush(stdin); getline(cin, placa);
				cout<<"Ingrese el color del vehiculo: "; fflush(stdin); getline(cin, color);
				cout<<"Ingrese la marca del vehiculo: "; fflush(stdin); getline(cin, marca);
				cout<<"Ingrese el velocimetro del vehiculo: "; cin>>velocidad;
				Vehiculo v(placa, color, marca, velocidad);
				v.mostrarDatos(); cout<<endl;
				cout<<"Ingrese la nueva velocidad del vehiculo: "; cin>>nuevaVelocidad;
				v.cambiarVelocidad(nuevaVelocidad);				
				system("pause");
				
				break;
			}
			case 2:
			{
				system("cls");
				cout<<"\nAUTOMOVIL\n "<<endl;
				int subir, bajar, puertas, pasajeros;
				cout<<"Ingrese el numero de placa del automovil: "; fflush(stdin); getline(cin, placa);
				cout<<"Ingrese el color del automovil: "; fflush(stdin); getline(cin, color);
				cout<<"Ingrese la marca del automovil: "; fflush(stdin); getline(cin, marca);
				cout<<"Ingrese el velocimetro del automovil: "; cin>>velocidad;
				cout<<"Ingrese la cantidad de puertas del automovil: "; cin>>puertas;
				cout<<"Ingrese la cantidad de pasajeros que tiene el automovil: "; cin>>pasajeros;
				Automovil a(placa, color, marca, velocidad, puertas, pasajeros);
				a.mostrarDatos();
				a.mostrarAutomovil();
				cout<<"Ingrese la cantidad de pasajeros que subieron: "; cin>>subir;
				a.subirPasajeros(subir);
				cout<<"Ingrese la cantidad de pasajeros que bajaron: "; cin>>bajar;
				a.bajarPasajeros(bajar);
				a.mostrarDatos();
				a.mostrarAutomovil();
				system("pause");
				
				break;
				
			}
			case 3:
			{
				system("cls");
				cout<<"\nCAMION\n "<<endl;
				string carga, cambioCarga;
				cout<<"Ingrese el numero de placa del camion: "; fflush(stdin); getline(cin, placa);
				cout<<"Ingrese el color del camion: "; fflush(stdin); getline(cin, color);
				cout<<"Ingrese la marca del camion: "; fflush(stdin); getline(cin, marca);
				cout<<"Ingrese el velocimetro del automovil: "; cin>>velocidad;
				cout<<"Ingrese el tipo de carga: "; fflush(stdin); getline(cin, carga);
				Camion c(placa, color, marca, velocidad, carga);
				c.mostrarDatos();
				c.mostrarCamion();
				cout<<"Ingrese el nuevo cambio de carga: "; fflush(stdin); getline(cin, cambioCarga);
				c.cambiarCarga(cambioCarga);
				c.mostrarDatos();
				c.mostrarCamion();
				system("pause");
				
				break;
			}
			case 4:
			{
				cout<<"Saliendo del programa....."<<endl;
				break;
			}
			default:
			{
				cout<<"Opcion invalida, intente denuevo."<<endl;
				system("pause");
			}			
		}
		
	}while(opc!=4);	
	
	return 0;
}
