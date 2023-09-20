#include "Zombi.h"
#include <iostream>
#include "Planta.h"
#include "Proyectil.h"
#include"Actor.h"
#include <vector>
#include <cmath>
using namespace std;
//void mostrarDatos(Zombi z1)
//{
//    cout << z1.getPosicionx() << endl;
//    cout << z1.getPosiciony() << endl;
//    cout << z1.getVelocidad() << endl;
//    cout << z1.valorDanio << endl;
//}
void mostrar2(Zombi z2) {
    cout <<"posicion x:" << z2.getPosicionx() << endl;
    cout << "posiciony:" << z2.getPosiciony() << endl;
    cout <<"alto del zombi:" << z2.getAlto() << endl;
    cout << "ancho del zombi:" << z2.getAncho() << endl;
    cout << "velocidad del zombi:" << z2.getVelocidad() << endl;
    cout << "valor de daño del zombi:" << z2.valorDanio << endl;
}


void mostrarDatosPlanta(Planta p1) {
    cout <<"poscion x:" << p1.getPosicionx() << endl;
    cout << "posicion y:" << p1.getPosiciony() << endl;
    cout << "alto de la planta:" << p1.getAlto() << endl;
    cout <<"ancho de la planta:" << p1.getAncho() << endl;
    cout <<"nivel de vida de la planta:" << p1.nivelVida<<endl;

}



void  mostrarDatosProyectil(Proyectil pr) {
    cout <<"posicion x:" << pr.getPosicionx() << endl;
    cout << "alto:" << pr.getAlto() << endl;
    cout << "ancho:" << pr.getAncho() << endl;
    cout << "velocidad del pro:" << pr.getVelocidad()<<endl;
    //cout<<pr.nivelDano<<endl;
}


void ProyectilMasCercano(vector <Proyectil> listaProyectiles,Zombi target,float radio) {

    //aplicamos fuerza bruta para iterar todos los elementos del valor


    int may = 2000000;
    Proyectil *proyectilCercano=nullptr;

    for (int i = 0; i < listaProyectiles.size(); i++) {

       
        Proyectil proyectilActual = listaProyectiles[i];

        //calcular la distancia entre que existe entre proyectil actual y target
        //r=formula CalcularDistancia entre dos puntos

        int distancia;
        distancia = sqrt(pow(target.getPosicionx()-proyectilActual.getPosicionx(),2)+pow(target.getPosiciony()-proyectilActual.getPosiciony(),2));
        //distancia = sqrt(pow(pr)+pow());

        //preguntar si r es menor que el extremo aux
        //si se cumple cambiar el extremo aux por r



        if(distancia<may){


            may = distancia;
            proyectilCercano = &proyectilActual;

            
        }
        
        //mostrar

        cout << proyectilCercano->getPosicionx()<<" "<<proyectilCercano->getPosiciony();
    }



}



int main()
{
   /* Zombi z1(5, 2, 3);*/
    Zombi z2(0, 0, 70, 70, 5,500);

    char direccion;
    char tipoZombi;
    cout << "ingrese una direccion (N,S,E,O)" << endl;
    cin >> direccion;
   /* z1.avanzar(direccion);*/
    z2.avanzar(direccion);
    cout << "datos de z1" << endl;
   /* mostrarDatos(z1);*/


   
   




    cout << "datos de z2" << endl;
    mostrar2(z2);
    z2.dibujar('g');

    
    //desde aqui comienza todo de la planta
    Planta p1(2, 3, 5, 5,guisante,500);
    char tipo;
    cout << "ingrese la planta g,c,n,gi" << endl;
    cin >> tipo;
    p1.crecer(tipo,1);
    cout << "datos de la planta" << endl;
    mostrarDatosPlanta(p1);
    p1.dibujar('g');



    //desde aqui comienza todo sobre  lo del proyectil no esta en funcion de que tipo de planta 
    //esta lanzara los proyectiles

    Proyectil pr(2,0, 2, 2, 3);
    pr.mover();
    cout << "datos del proyectil" << endl;
    mostrarDatosProyectil(pr);
    pr.dibujar('g');



    //este solo va a tener el nivel de daño
   //el zombi esta recibiendo daño por defecto la plata esta con el guisante que saca 10 de vida

    
    z2.Colicionar(p1.disparar());

    z2.Colicionar(&p1);
    
    //crear proyectiles
    Proyectil pr2(2), pr3(9), pr4(7), pr5(4), pr6(2), pr7(90);

    vector <Proyectil> proyectiles;
    //incertar en el vector de proyectiles p1 p2 p3...
    proyectiles.push_back(pr2 );

    //crear dos zombies en diferentes posiciones o coordenadas

    Zombi z4(5), z5;
    ProyectilMasCercano(proyectiles, z4, 3.0f);
    //ProyectilCercano(proyectiles, z5, 4.0f);

    return 0;
}

