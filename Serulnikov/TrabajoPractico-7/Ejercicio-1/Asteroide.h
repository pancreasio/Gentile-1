#ifndef ASTEROIDE_H
#define ASTEROIDE_H
#include <iostream>
#include "../../libreria/libreria.h"
class Asteroide{
	int _x;
	int _y;
	static int _cantAsteroides; // Declaraci�n  atributo est�tico
public:
	Asteroide(int x, int y);
	~Asteroide();
	void dibujar();
	void borrar();
	int getX(){ return _x;}
	int getY(){ return _y;}
	static int getCantAsteroides(){return _cantAsteroides;}// Ahora el m�todo es est�tico.
};
#endif