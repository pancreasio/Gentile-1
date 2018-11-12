#include "Asteroide.h"

int Asteroide::_cantAsteroides = 0;
void Asteroide::dibujar(){
	gotoxy(_x,_y);
	cout<<(char)'*';
}
void Asteroide::borrar(){
	gotoxy(_x,_y);
	cout<<" ";
}
Asteroide::Asteroide(int x, int y){
	_x = x;
	_y = y;
	_cantAsteroides++;
}
Asteroide::~Asteroide(){
	_cantAsteroides--;
}