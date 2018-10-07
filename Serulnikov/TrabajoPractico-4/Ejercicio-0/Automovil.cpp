#include "Automovil.h"

Automovil::Automovil(Motor* motor, string modelo){
	_motor = motor;
	_modelo = modelo;
}
void Automovil::setMotor(Motor* motor){
	_motor = motor;
}
void Automovil::setModelo(string modelo){
	_modelo = modelo;
}
string Automovil::getModelo(){
	return _modelo;
}
void Automovil::verTodo(){
	cout<<"modelo: " << _modelo.c_str()<<" ";
	_motor->verTodo();
	
}