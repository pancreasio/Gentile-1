#ifndef CILINDRO_H
#define CILINDRO_H
#include "Circulo.h"
class Cilindro:public Circulo{
private:
	int _altura;
public:
	Cilindro(int x, int y, float radio, int altura);
	~Cilindro();
	void setAltura(int altura);
	int getAltura();
	float superficie();
	float volumen();
	void verTodo();
};
#endif