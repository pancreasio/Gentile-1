#include "Juego.h"

Juego::Juego(){
	// completar
}
Juego::~Juego(){
	// completar
}
void Juego::init(){
	srand(time(0));
	_tecla=' ';
	_gameOver=false;
	_puntos=0;
	_resultado=false;
	_nave= new Nave(38,21,3,3);
	for (int i=0; i<TOPE; i++){
		_balas[i]=NULL;
		_asteroides[i]=NULL;
	}
	
	
}
void Juego::draw(){
	if(!_gameOver){
		display();
		_nave->dibujar();
		// completar	
	}
}
void Juego::update(){

	// completar


	if(_puntos==PUNTOS){
		_resultado=true;
		_gameOver=true;
	}
	if((_nave->getVidas()==0))	
		_gameOver=true;
	_nave->morir();
}
void Juego::input(){
	_tecla=0;
	if(_tecla=getKey(KEY_LEFT||KEY_RIGHT)){
		_nave->mover(_tecla);
	}
	if(_tecla==KEY_ESC){
		_gameOver = true;
	}
}
void Juego::play(){
	init();
	hideCursor();
	marco(1,2,80,24);
	display();
	_nave->dibujar();
	while(!gameOver()){
		input();
		update();
		draw();
		miliSleep(55);
	}
	result();
}
void Juego::result(){
	if(_gameOver){
		gotoxy(35,12);
		cout<<"Game Over";
	}
}
bool Juego::gameOver(){
	return _gameOver;
}
void Juego::display(){
	gotoxy(2,1);cout<<"Vidas "<<_nave->getVidas()<<" ";
	gotoxy(11,1);cout<<"Salud ";
	gotoxy(17,1);cout<<"        ";
	int c=_nave->getCorazones();
	for(int i=0;i<c;i++){
		gotoxy(17+i,1);
		cout<<(char)CORAZON;
	}
}