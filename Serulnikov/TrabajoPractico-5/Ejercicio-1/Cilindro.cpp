#include "Cilindro.h"
Cilindro::Cilindro(int x, int y, float radio, int altura):Circulo(x,y,radio){
	_altura = altura;
}

Cilindro::~Cilindro(){
}

void Cilindro::setAltura(int altura){
	_altura = altura;
}

int Cilindro::getAltura(){
	return _altura;
}


float Cilindro::superficie(){
	return 2*Circulo::superficie() + 3.14f * diametro() * _altura;
}

float Cilindro::volumen(){
	return Circulo::superficie()* _altura;
}

void Cilindro::verTodo(){
	std::cout<<"diametro: " <<diametro()<<" circunferencia: " <<circunferencia()<< " area: " <<superficie()<< " volumen: " << volumen();
}