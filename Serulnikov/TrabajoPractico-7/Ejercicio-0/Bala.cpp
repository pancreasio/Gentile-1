#include "Bala.h"

int Bala::_cantBalas = 0;
Bala::Bala(int x, int y){
	_x = x;
	_y=y;
	_cantBalas++;
}

void Bala::dibujar(){
	gotoxy(_x,_y);
	cout<<(char)'!';
}
void Bala::borrar(){
	gotoxy(_x,_y);
	cout<<"  ";
}

int Bala::getCantBalas(){
	return _cantBalas;
}