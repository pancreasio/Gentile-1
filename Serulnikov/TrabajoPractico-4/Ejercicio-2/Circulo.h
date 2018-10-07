#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "Punto.h"
#include "../../libreria/libreria.h"
using namespace std;
class Circulo{
private:
	Punto* _centro;
	float _radio;
public:
	Circulo(int x, int y, float radio);
	~Circulo();
	void setPunto(int x, int y);
	void setRadio(float radio);
	float getRadio();
	void verTodo();
	float diametro();
	float superficie();
};
#endif