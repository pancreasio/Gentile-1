#ifndef TELEVISOR_H
#define TELEVISOR_H
#include "DispElect.h"
#include <iostream>
using namespace std;
class Televisor:public DispElect{
private:
	int _canal;
	int _brillo;
public:
	Televisor();
	Televisor(bool encendido, int canal,int brillo);
	~Televisor();
	void setCanal(int canal);
	int getCanal();
	void setBrillo(int brillo);
	int getBrillo();
	void verTodo();
};
#endif