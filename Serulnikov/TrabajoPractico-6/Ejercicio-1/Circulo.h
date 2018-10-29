#ifndef CIRCULO_H
#define CIRCULO_H
#include "../Ejercicio-0/FiguraGeometrica.h"
#include <iostream>
using namespace std;
class Circulo:public FiguraGeometrica{
public:
	virtual char getTipo(){return 'C';}
	virtual void dibujar();
	void pirulo();
};
#endif