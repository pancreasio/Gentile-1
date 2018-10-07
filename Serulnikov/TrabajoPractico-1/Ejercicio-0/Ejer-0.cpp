/*
Grupo 1
Apellido Nombre, Apellido Nombre,
Ejercicio 0
...
*/
#include <iostream>
#define TOPE 5 // obligatorio para tamaño de arreglos
// obligatorio en mayusculas
using namespace std;
void cargoVec(int vec[TOPE]){
	for(int i=0;i<TOPE;i++){
		cout<<"Ingrese vec["<<i<<"]=";
		cin>>vec[i];
	}
}
void muestroVec(int vec[TOPE]){
	for(int i=0;i<TOPE;i++)
		cout<<"vec["<<i<<"]="<< vec[i]<<endl;
}
void main(){
	int vec[TOPE]; // declaracion de un array
	int vec2[TOPE]={10,20,30,40,50}; // definicion de un array
	const float pi=3.14;
	cargoVec(vec);
	muestroVec(vec);
	fflush(stdin);
	cin.get();
}