#pragma once
#include <iostream>
#include "Actor.h"
#include "Proyectil.h"
#include "Planta.h"
#include "Coordenadas.h"
using namespace std;
class Zombi :public Actor 
{
private:
	
	
	int nivelVida;
	float velocidad;
	

public:
	int valorDanio;
	int vida;

	//constructores
	Zombi(int , int , int , int , int,int );
	Zombi(int vid);
	Zombi();
	//geters
	float getVelocidad();
	int getnivelVida();

	//seters


	//Metodos
	int avanzar(char direccion);
	void Atacar();
	void ChocarProyectil();
	void dibujar(char tipoZombi);
	//el zombie esta recibiendo daño
	void Colicionar(Proyectil *p1);
	//el zombie hace daño
	void Colicionar(Planta *pl);

	void detenerse();

	void comer();
	
};

