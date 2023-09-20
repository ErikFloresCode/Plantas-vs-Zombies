#pragma once
#include "Actor.h"
class Proyectil: public Actor
{
private:
	
	int velocidad;
	//coordenadas objetivo

public:
	int nivelDano;

	Proyectil(int x,int y, int al, int an, int vel);
	Proyectil(int d);

	

	//desde aqui coienzan los geters

	
	int getVelocidad();
	void setVelocidad(int velo);
	
	
	
	//funciones
	int mover();
	void dibujar(char tipoProyectil);


	//crear dos  funciones que dirija el proyectil a su destino
	//1 que sea disparo horizontal
	float calcular_posicion_objetivo(int posicion_actual_del_zombie, int velocidad_Z);
	//2 disparo vertical 
	
	//3 disaro en cualquier direcion


	//crear un funcion que se llame destrozar
	void destrozar(float lugar_de_colision);
	//no hay nescecidad de de que se destruya a nivel codigo solo que se muestre nada mas




};

