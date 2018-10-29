#ifndef CUADRADO_H
#define CUADRADO_H
#include "FiguraGeometrica.h"
class Cuadrado:public FiguraGeometrica{
public:
	virtual char getTipo(){return 'c';}
	virtual void dibujar();
};
#endif