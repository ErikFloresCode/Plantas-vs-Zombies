#include "Planta.h"
#include <iostream>
using namespace std;
Planta::Planta(int x, int y, int al, int an,TipoPlanta tipos,int vi):Actor(x,y,al,an)
{
	
	tipo = tipos;
	nivelVida = vi;
}

Planta::Planta()
{
}



//estos  son los geters


int Planta::getVelocidadDisparo()
{
	return valocidadDisparo;
}

int Planta::getValorDano()
{
	return valorDano;
}


//termonando los geters

//empezando las funciones

int Planta::crecer(char tipo, float dim)
{
	int alto=getAlto();
	int ancho=getAncho();
	if (tipo == 'g') {
		alto = ancho = 3;
	}
	else if (tipo == 'c') {
		 alto = ancho = 5;
	}
	else if (tipo == 'n')
	{
		 alto = ancho = 2;
	}
	else if (tipo == 'gi') {
		 alto = ancho = 1;
	}
	setAlto(alto);
	setAncho(ancho);
	return alto, ancho;

}

void Planta::dibujar(char tipoPlanta)
{

	if (tipoPlanta == 'g') {
		cout << "         **" << endl;
		cout << "       *******   **" << endl;
		cout << "      *************" << endl;
		cout << "      *************" << endl;
		cout << "       *******   **" << endl;
		cout << "          *" << endl;
		cout << "          *" << endl;
		cout << "   *  *   *  *  *" << endl;
		cout << "      * **** *" << endl;
		

	}
	else if (tipoPlanta == 'G') {
		cout << "      " << endl;
		cout << "        *  *  * " << endl;
		cout << "      *  *****  *" << endl;
		cout << "      *  *****  *" << endl;
		cout << "      *  *****  *" << endl;
		cout << "        *  *  *" << endl;
		cout << "           *" << endl;
		cout << "           * " << endl;
		cout << "     * *   *   * *" << endl;
		cout << "       *  ***  *" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
	}
}


//aqui estaremos utilizando el tipo de planta que veremos en el enum

Proyectil* Planta::disparar()
{
	Proyectil *p1=nullptr;
	switch (tipo)
	{
	case guisante:
		//cada tipo de planta tendra un valor de dato
        //de daño
		//10
		 
		p1 = new Proyectil(10);

		break;
	case Carnivora:
		//5

		p1 = new Proyectil(5);

		break;
	case kactus:
		//3
		p1 = new Proyectil(3);


		break;
	default:
		break;
	}

	p1->mover();
	return p1;
}

Planta::~Planta()
{
}


