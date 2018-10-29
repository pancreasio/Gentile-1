#ifndef CABALLERO_H
#define CABALLERO_H
#include "Personaje.h"
class Caballero:public Personaje{
private:
	int _rango;
public:
	Caballero();
	Caballero(int vida, int magia, int rango);
	~Caballero();
	void Atacar(Personaje* per);
	string getTipo(){return "Caballero";};
	void setRango(int rango);
	int getRango();
	void verTodo();
};
#endif