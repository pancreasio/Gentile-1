#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <iostream>
using namespace std;
class Personaje{
protected:
	int _vida;
	int _magia;
public:
	Personaje();
	Personaje(int vida, int magia);
	~Personaje();
	virtual void Atacar(Personaje* per)=0;
	virtual string getTipo()=0;
	virtual void verTodo()=0;
	bool estaVivo();
	int getVida();
	int getMagia();
	void setVida(int vida);
	void setMagia(int magia);
};
#endif