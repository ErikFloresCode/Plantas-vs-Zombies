#include "Actor.h"
#include <iostream>

Actor::Actor(int x,int y,int al,int an) {
	 posicionx=x;
	 posiciony = y;
	 ancho=al;
	 alto = an;

}

Actor::Actor()
{
}

void Actor::dibujar()
{

}


int Actor::getPosicionx() {
	return posicionx;
}

void Actor::setPosicionx(int x)
{
	posicionx = x;

}

int Actor::getPosiciony() {
	return posiciony;
}

void Actor::setPosiciony(int y)
{
	posiciony = y;
}

int Actor::getAlto() {
	return alto;
}

void Actor::setAlto(int al)
{
	alto = al;
}

int Actor::getAncho() {
	return ancho;
}

void Actor::setAncho(int an)
{
	ancho = an;
}

