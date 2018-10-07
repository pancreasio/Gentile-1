#include <iostream>
#include "Autor.h"
#include "Libro.h"
using namespace std;
void main(){
	Autor* Autor1 = new Autor("Deitel", 65, "USA");
	Autor* Autor2 = new Autor("Eckel", 55, "USA");
	Libro* Libro1 = new Libro("C++ como programar", 250, Autor1);
	Libro* Libro2 = new Libro("Pensando en C++", 250, Autor2);
	Libro1->verTodo();
	cout<<endl;
	Libro2->verTodo();
	cin.get();
	delete Libro1;
	delete Libro2;
	delete Autor1;
	delete Autor2;
}