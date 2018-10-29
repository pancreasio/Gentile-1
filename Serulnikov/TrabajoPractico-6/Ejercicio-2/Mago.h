#ifndef MAGO_H
#define MAGO_H
#include "Personaje.h"
class Mago:public Personaje{
private:
	int _tipoVarita;
public:
	Mago();
	Mago(int vida, int magia, int tipoVarita);
	~Mago();
	void Atacar(Personaje* per);
	string getTipo(){return "Mago";};
	void setTipoVarita(int tipoVarita);
	int getTipoVarita();
	void verTodo();
};
#endif