#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include <iostream>
using namespace std;
class FiguraGeometrica{
public:
	virtual void dibujar()=0;
	virtual char getTipo()=0;
};
#endif