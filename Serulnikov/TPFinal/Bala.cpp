#include "Bala.h"

// completar
int Bala::_cantBalas = 0;
Bala::Bala(int x,int y){
	_x=x;
	_y=y;
	_cantBalas++;
}
Bala::~Bala(){
}
void Bala::dibujar(){
	gotoxy(_x,_y);
	cout<<" ";
	_y--;
	gotoxy(_x,_y);
	cout<<(char)BALA;
}
int Bala::getCantBalas(){
	return _cantBalas;
}
void Bala::borrar(){
	gotoxy(_x,_y);
	cout<<" ";
}
bool Bala::afuera(){
	return _y==AFUERA;
}