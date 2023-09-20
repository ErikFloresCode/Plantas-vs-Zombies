#include "Proyectil.h"
#include <iostream>
#include "Planta.h"
using namespace std;

Proyectil::Proyectil(int x, int y,int al, int an, int vel):Actor(x,y,al,an)
{
	
	velocidad = vel;
	


}


Proyectil::Proyectil(int d) {
	nivelDano = d;
}

//desde aqui empiezan los geters





int Proyectil::getVelocidad()
{
	return velocidad;
}

void Proyectil::setVelocidad(int velo)
{
	velocidad = velo;
}





//termina los geters


int Proyectil::mover()
{
	int posix=getPosicionx();
    posix = posix + velocidad;

	setPosicionx(posix);
	return posix;
}

void Proyectil::dibujar(char tipoProyectil)
{
	
	if (tipoProyectil == 'h') {
		cout << "  * ********  " << endl;
		cout << "   * ********" << endl;
		cout << "    * ******** " << endl;
		cout << "     * ********" << endl;
		
	}
	else if (tipoProyectil =='g') {
		cout << "       *****" << endl;
		cout << "     ***********" << endl;
		cout << "    *************" << endl;
		cout << "    *************" << endl;
		cout << "     ***********" << endl;
		cout << "        *****" << endl;
	}



}

float Proyectil::calcular_posicion_objetivo(int posicion_actual_del_zombie, int velocidad_Z) {
	
	//hacer el calculo
	float result = 0;

	return result;
}