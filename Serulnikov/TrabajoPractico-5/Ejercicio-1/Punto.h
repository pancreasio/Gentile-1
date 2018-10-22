#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include "../../libreria/libreria.h"
using namespace std;
class Punto{
private:
	int _x;
	int _y;
public:
	Punto();
	~Punto();
	Punto(int x, int y);
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void dibujar();
	void mostrar();
	void mover(int x, int y);
	void borrar();
};
#endif