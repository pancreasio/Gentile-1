#include "Coche.h"
void main(){
	Coche* mondeo = new Coche("Mondeo", "GDI");
	mondeo->inflarRueda(0,29);
	mondeo->inflarRueda(1,29);
	mondeo->inflarRueda(2,31);
	mondeo->inflarRueda(3,31);
	mondeo->verTodo();
	cout<< endl;
	mondeo->abrirPuerta(0);
	cout<< endl;
	mondeo->verTodo();
	cout<< endl;
	mondeo->cerrarPuerta(0);
	delete mondeo;
	cin.get();
}