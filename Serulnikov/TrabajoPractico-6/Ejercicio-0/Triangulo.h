#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
class Triangulo:public FiguraGeometrica{
public:
	virtual char getTipo(){return 'T';}
	virtual void dibujar();
};
#endif