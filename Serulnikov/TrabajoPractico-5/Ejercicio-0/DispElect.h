#ifndef DISPELECT_H
#define DISPELECT_H
#include <iostream>
using namespace std;
class DispElect{
private:
	bool _encendido;
public:
	DispElect();
	DispElect(bool encendido);
	~DispElect();
	void encender();
	bool getEncendido();
};
#endif