#include "Circulo.h"

Circulo::Circulo(int x, int y, float radio){
	_centro = new Punto(x,y);
	_radio = radio;
}

Circulo::~Circulo(){
	if (_centro != NULL){
	delete _centro;
	}
}

void Circulo::setPunto(int x, int y){
	_centro->setX(x);
	_centro->setY(y);
}

void Circulo::setRadio(float radio){
	_radio = radio;
}

float Circulo::getRadio(){
	return _radio;
}

void Circulo::verTodo(){
	cout<<"diametro: "<<diametro()<<" circunferencia: "<<circunferencia()<<" area: "<< superficie();
}

float Circulo::circunferencia(){
	return 3.14 * diametro();
}

float Circulo::diametro(){
	return _radio *2;
}

float Circulo::superficie(){
	return 3.14f * _radio * _radio;
}