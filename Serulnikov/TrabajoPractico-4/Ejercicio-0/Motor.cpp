#include "Motor.h"

Motor::Motor(){
	_tipo = "sin tipo";
}

Motor::Motor(string tipo){
	_tipo = tipo;
}

void Motor::setTipo(string tipo){
	_tipo = tipo;
}

string Motor::getTipo(){
	return _tipo;
}

void Motor::verTodo(){
	cout<<"motor: "<<_tipo.c_str();
}