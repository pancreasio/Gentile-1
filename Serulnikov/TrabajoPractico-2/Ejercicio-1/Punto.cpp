#include "Punto.h"
#include <iostream>
#include "../../libreria/libreria.h"
using namespace std;

Punto::Punto(){
	_x = 0;
	_y = 0;
}
Punto::Punto(int x, int y){
	_x = x;
	_y = y;
}
void Punto::setX(int x){
	_x=x;
}

void Punto::setY(int y){
	_y=y;
}

int Punto::getX(){
	return _x;
}

int Punto::getY(){
	return _y;
}

void Punto::mostrar(){
	cout<<"x: "<<_x<<" y: "<<_y;
}

void Punto::dibujar(){
	gotoxy(_x,_y);
	cout<<"*";
}

void Punto::mover(int x, int y){
	if(0<x<120 && 0<y<30){
	_x = x;
	_y = y;
	}
}

void Punto::borrar(){
	gotoxy(_x,_y);
	cout<<" ";
}
