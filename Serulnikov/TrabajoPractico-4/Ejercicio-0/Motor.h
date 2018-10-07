#ifndef MOTOR_H
#define MOTOR_H
#include <iostream>
using namespace std;
class Motor{
private:
	string  _tipo;
public:
	Motor();
	Motor(string tipo);
	void setTipo(string tipo);
	string getTipo();
	void verTodo();
};
#endif