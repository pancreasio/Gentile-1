#ifndef COCHE_H
#define COCHE_H
#include <iostream>
#include "Puerta.h"
#include "Rueda.h"
#include "../Ejercicio-0/Motor.h"
#define CANT 4
class Coche{
private:
	string _modelo;
	Motor* _motor;
	Rueda* _ruedas[CANT];
	Puerta* _izq;
	Puerta* _der;
public:
	Coche(string modelo,string tipoMotor);
	~Coche();
	void setModelo(string modelo);
	string getModelo();
	void cerrarPuerta(int cual);
	void abrirPuerta(int cual);
	void inflarRueda(int nroRueda, int psi);
	void verTodo();
};
#endif