#include <iostream>
#include "Circulo.h"
using namespace std;
void main(){
	Circulo* c1 = new Circulo(1,1,10);
	Circulo* c2 = new Circulo(2,2,20);
	cout<<"C1->";
	c1->verTodo();
	cout<<"\nel diametro de c1 es: "<<c1->diametro()<<"\nla superficie de c1 es: "<<c1->superficie()<<"\n";
	delete c1;
	cout<<"\nC2->";
	c2->verTodo();
	cout<<"\nel diametro de c2 es: "<<c2->diametro()<<"\nla superficie de c2 es: "<<c2->superficie()<<"\n";
	delete c2;
	cin.get();
}