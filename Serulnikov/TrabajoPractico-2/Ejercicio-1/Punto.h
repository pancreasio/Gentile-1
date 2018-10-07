#ifndef PUNTO_H
#define PUNTO_H
class Punto{
private:
	int _x;
	int _y;
public:
	Punto();
	Punto(int x, int y);
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void dibujar();
	void mostrar();
	void mover(int x, int y);
	void borrar();
};
#endif