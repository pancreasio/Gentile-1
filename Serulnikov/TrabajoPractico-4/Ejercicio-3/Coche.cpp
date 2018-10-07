#include "Coche.h"
Coche::Coche(string modelo,string tipoMotor){
	_modelo = modelo;
	_motor = new Motor(tipoMotor);
	for(int i = 0; i<CANT; i++){
		_ruedas[i] = new Rueda();
	}
	_izq = new Puerta("izquierda");
	_der = new Puerta("derecha");
}

Coche::~Coche(){
	delete _motor;
	for(int i = 0; i<CANT; i++){
		if (_ruedas[i] != NULL){
			delete _ruedas[i];
		}
	}
	delete _izq;
	delete _der;
}


void Coche::setModelo(string modelo){
	_modelo = modelo;
}


string Coche::getModelo(){
	return _modelo;
}


void Coche::cerrarPuerta(int cual){
	if (cual = 0){
		_izq->cerrar();
	}
	else{
		if (cual = 1){
			_der->cerrar();
		}
		else{
			cout<<"no es una puerta valida";
		}
	}
}

void Coche::abrirPuerta(int cual){
	if (cual = 0){
		_izq->abrir();
	}
	else{
		if (cual = 1){
			_der->abrir();
		}
		else{
			cout<<"no es una puerta valida";
		}
	}
}

void Coche::inflarRueda(int nroRueda, int psi){
	if (0<=nroRueda<CANT){
		_ruedas[nroRueda]->inflar(psi);
	}
	else{
		cout<<"numero de rueda invalido";
	}
}

void Coche::verTodo(){
	cout<<"modelo: "<<_modelo.c_str()<<" motor: "<<_motor->getTipo().c_str()<<" presion ruedas= DI:"<<_ruedas[0]->presion();
	cout<<" DD:"<<_ruedas[1]->presion()<<" TI:"<<_ruedas[2]->presion()<<" TD:"<<_ruedas[3]->presion()<<" ";
	if(_izq->getAbierta()){
	cout<<"prta izq: abierta ";
	}
	else{
	cout<<"prta izq: cerrada ";
	}
	if(_der->getAbierta()){
	cout<<"prta der: abierta ";
	}
	else{
	cout<<"prta der: cerrada ";
	}
}