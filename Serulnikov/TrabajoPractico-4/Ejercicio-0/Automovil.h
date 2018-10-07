#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include "Motor.h"
class Automovil{
private:
	string _modelo;
	Motor* _motor;
public:
	Automovil(Motor* motor, string modelo);
	void setMotor(Motor* motor);
	void setModelo(string modelo);
	string getModelo();
	void verTodo();
};
#endif