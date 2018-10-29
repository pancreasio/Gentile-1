#ifndef ARQUERO_H
#define ARQUERO_H
#include "Personaje.h"
class Arquero:public Personaje{
private:
	char _tipoArco;
public:
	Arquero();
	Arquero(int vida, int magia, char tipoArco);
	~Arquero();
	void Atacar(Personaje* per);
	string getTipo(){return "Arquero";};
	void setTipoArco(char tipoArco);
	char getTipoArco();
	void verTodo();
};
#endif