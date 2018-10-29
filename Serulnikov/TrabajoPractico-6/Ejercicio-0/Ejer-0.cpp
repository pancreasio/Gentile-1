#include <iostream>
#include "Cuadrado.h"
#include "Triangulo.h"

using namespace std;
void main(){
	FiguraGeometrica* c=new Cuadrado();
	FiguraGeometrica* t=new Triangulo();

	c->dibujar();
	t->dibujar();

	delete c;
	delete t;
	cin.get();
}