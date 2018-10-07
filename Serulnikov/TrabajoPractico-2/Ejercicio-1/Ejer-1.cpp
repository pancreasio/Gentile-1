#include <iostream>
#include "../../libreria/libreria.h"
#include "Punto.h"
void main(){
	Punto* p1 = new Punto(1,1);
	Punto* p2 = new Punto(40,12);
	p1->dibujar();
	p2->dibujar();
	p2->mover(15,20);
	p2->dibujar();
	delete p1;
	delete p2;
	cin.get();
}