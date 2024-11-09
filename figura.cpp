#include <iostream>
#include<string>
#include<cmath>

using namespace std;

class Figura{
	protected:
		string color;
	public:
		Figura(string);
};

Figura::Figura(string colorFigura)
{
	color = colorFigura;
}

class Circulo : public Figura{
	private:
		double radio;
	public:
		Circulo(string, double);
		void calcularArea(double);
		void calcularPerimetro(double);
};

Circulo::Circulo(string colorFigura, double radioC) : Figura(colorFigura)
{
	radio = radioC;
}

void Circulo::calcularArea(double radio)
{
	double areaC;
	areaC = M_PI * pow(radio,2);

	cout<<"\nLa figura geometrica de un circulo de color "<<color<<", posee una area de "<<areaC<<" unidades cuadradas. "<<endl;

}

void Circulo::calcularPerimetro(double radio)
{
	double perimetroC;
	perimetroC = 2 * M_PI * radio;
	
	cout<<"Ademas, posee un perimetro de "<<perimetroC<<" unidades. "<<endl;

}

class Rectangulo: public Figura{
	private:
		double base;
		double altura;
	public:
		Rectangulo(string, double, double);
		void calcularArea(double, double);
};

Rectangulo::Rectangulo(string colorFigura, double baseR, double alturaR) : Figura(colorFigura)
{
	base = baseR;
	altura =  alturaR;
}

void Rectangulo::calcularArea(double base, double altura) 
{
	double areaR;
	areaR = base * altura;
	
	cout<<"\nLa figura geometrica de un rectangulo de color "<<color<<", posee una area de "<<areaR<<" unidades cuadradas. "<<endl;
}

class Triangulo : public Figura{
	private: 
		double base;
		double altura;
		string tipo;
	public:
		Triangulo(string, double, double, string);
		void calcularArea(double, double);
};

Triangulo::Triangulo(string colorFigura, double baseT, double alturaT, string tipoT ): Figura(colorFigura)
{
	base = baseT;
	altura = alturaT;
	tipo = tipoT;
}

void Triangulo::calcularArea(double base, double altura)
{
	double areaT;
	areaT = (base * altura)/2;
	
	cout<<"\nLa figura geometrica de un triangulo "<<tipo<<" de color "<<color<<", posee una area de "<<areaT<<" unidades cuadradas. "<<endl;
}

int main()
{
	int opc;	
	string colorFigura;
	Figura f(colorFigura);
	do
	{
		system("cls");
		cout<<"FIGURAS"<<endl;
		cout<<"1. Circulo "<<endl;
		cout<<"2. Rectangulo "<<endl;
		cout<<"3. Triangulo "<<endl;
		cout<<"4. Salir del programa "<<endl;
		
		cout<<"Ingrese una opcion: "; cin>>opc;
		
		switch(opc)
		{
			case 1: 
			{
				system("cls");
				cout<<"\nCICRULO\n"<<endl;
				double radioC;
				cout<<"Ingrese el color de la figura: "; fflush(stdin); getline(cin, colorFigura);
				cout<<"Ingrese el radio del circulo: "; cin>>radioC;
				Circulo fCirculo(colorFigura, radioC);
				fCirculo.calcularArea(radioC);
				fCirculo.calcularPerimetro(radioC);
							
				system("pause");
				
				break;
			}
			case 2:
			{
				system("cls");
				cout<<"\nRECTANGULO\n "<<endl;
				double baseR, alturaR;
				cout<<"Ingrese el color de la figura: "; fflush(stdin); getline(cin, colorFigura);
				cout<<"Ingrese la base del rectangulo: "; cin>>baseR;
				cout<<"Ingrese la altura del rectangulo: "; cin>>alturaR;
				Rectangulo fRectangulo(colorFigura, baseR, alturaR);
				fRectangulo.calcularArea(baseR, alturaR);
				system("pause");
				
				break;
				
			}
			case 3:
			{
				system("cls");
				cout<<"\nTRIANGULO\n "<<endl;
				double baseT, alturaT;
				string tipoT;
				cout<<"Ingrese el color de la figura: "; fflush(stdin); getline(cin, colorFigura);
				cout<<"Ingrese la base del triangulo: "; cin>>baseT;
				cout<<"Ingrese la altura del triangulo: "; cin>>alturaT;
				cout<<"Ingrese el tipo de triangulo: "; fflush(stdin); getline(cin, tipoT);
				Triangulo fTriangulo(colorFigura, baseT, alturaT, tipoT);
				fTriangulo.calcularArea(baseT, alturaT);
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
	
	
	
	return 0;
}

