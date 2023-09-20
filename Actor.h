#pragma once
class Actor
{
private:
	int posicionx;
	int posiciony;
	int alto;
	int ancho;

public:

	Actor(int x, int y, int al, int an);
	Actor();

	
	//estos son los geters de la clase padre
	//tambien se estan implementando en las clases hijas
	int getPosicionx();
	int getPosiciony();
	int getAlto();
	int getAncho();

	void setPosicionx(int x);
	void setPosiciony(int y);
	void setAlto(int al);
	void setAncho(int an);


	//por sia acaso se quiera modificar algo 

	 void dibujar();
};

