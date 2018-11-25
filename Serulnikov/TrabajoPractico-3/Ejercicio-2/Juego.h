#ifndef JUEGO_H
#define JUEGO_H
#include "../../libreria/libreria.h"
class Juego{
private:
	int _x;
	int _y;
	int _largo;
	int _tecla;
	bool _gameOver;
	bool _resultado;
	bool validate();
public:
	Juego();
	void init();
	bool gameOver();
	void input();
	void update();
	void draw();
	void play();
	void result();
};
#endif