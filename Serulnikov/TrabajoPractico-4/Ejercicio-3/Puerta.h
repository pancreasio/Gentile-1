#ifndef PUERTA_H
#define PUERTA_H
#include <iostream>
using namespace std;
class Puerta{
private:
	string _lugar;
	bool _abierta;
public:
	Puerta(string lugar);
	void setAbierta();
	bool getAbierta();
	void abrir();
	void cerrar();
};
#endif