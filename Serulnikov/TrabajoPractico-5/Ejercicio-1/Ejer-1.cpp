/*
Fecha inicio: 8/10/2018
Alumno: Juli�n Serulnikov
Enunciado: Crear las clases Circulo y Cilindro, La clase Cilindro hereda de la clase Circulo, la misma deber� poseer un atributo para
almacenar la altura int _altura.
Crear un constructor que reciba cuatro par�metros, x e y para posici�n, radio y altura.
Dicho constructor debe llamar al constructor de su clase base y pasarle los par�metros
correspondientes para inicializar la clase base.
Crear el setter de la altura validando que no se le asignen valores menores a cero.
Crear el getter de la altura.
Sobrecargar el m�todo superficie para que retorne el �rea de su circunferencia.
El �rea de un cilindro es igual a:
2 x (�rea de la base) + (circunferencia de la base) x altura .
Crear un m�todo volumen sabiendo que:
Volumen del cilindro = �rea de la base x altura.
Crear el archivo Ejer-1.cpp tal que pruebe las clases :
Circulo con un objeto usando el constructor por defecto.
Cilindro con un objeto usando el constructor parametrizado tal que:
El objeto circulo tendr�: x=1, y=5, radio=10
El objeto cilindro tendr�: x=2, y=10, radio=20, altura=5
*/
#include "Cilindro.h"
#include "Circulo.h"
#include <iostream>
void main(){
	Circulo* circulo = new Circulo(1,5,10.0f);
	Cilindro* cilindro = new Cilindro(2,10,20,5);
	cout<<"circulo de ";
	circulo->verTodo();
	cout<<endl;
	cout<<"cilindro de ";
	cilindro->verTodo();
	delete cilindro;
	delete circulo;
	fflush(stdin);
	cin.get();
}