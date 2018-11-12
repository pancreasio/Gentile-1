#ifndef BALA_H
#define BALA_H
#include <iostream>
#include "../../libreria/libreria.h"
class Bala{
private:
	int _x;
	int _y;
	static int _cantBalas;
public:
	Bala(int x,int y);
	void dibujar();
	void borrar();
	int getCantBalas();
	int getX(){ return _x;}
	int getY(){ return _y;}
};
#endif