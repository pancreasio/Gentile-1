#ifndef JUEGO_H
#define JUEGO_H
#define MIN_FIL 1
#define MIN_COL 1
#define MAX_FIL 24
#define MAX_COL 80
#define TOPE 5
#include "../../libreria/libreria.h"
#include "../Ejercicio-1/Asteroide.h"
#include <iostream>
#include <ctime>

class Juego{
	int _tecla;
	bool _gameOver;
	Asteroide* vecAst[TOPE];    
public:
	Juego();
	~Juego();
	void init();
	bool gameOver();
	void play();
	void input();
	void update();
	void draw();
	void result();
};
#endif