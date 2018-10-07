#include <iostream>
#include "Motor.h"
#include "Automovil.h"
using namespace std;

void main(){
	Motor* motorford = new Motor();
	motorford->setTipo("3.8L V6");
	Motor* motoraudi = new Motor("4.6L V8");
	Automovil* ford = new Automovil(motorford, "Mustang");
	Automovil* audi = new Automovil(motoraudi, "A4S");
	cout<<"El ford es: ";
	ford->verTodo();
	cout<< endl << "El audi es: ";
	audi->verTodo();
	cin.get();
}