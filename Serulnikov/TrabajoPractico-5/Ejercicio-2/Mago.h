#ifndef MAGO_H
#define MAGO_H
#include "Personaje.h"
class Mago:public Personaje{
private:
	int _tipoVarita;
public:
	Mago();
	Mago(string nombre, int edad, int tipoVarita);
	~Mago();
	void setTipoVarita(int tipoVarita);
	int getTipoVarita();
	void verTodo();
};
#endif