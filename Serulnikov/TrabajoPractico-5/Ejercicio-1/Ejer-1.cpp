/*
Fecha inicio: 8/10/2018
Alumno: Julián Serulnikov
Enunciado: Crear las clases Circulo y Cilindro, La clase Cilindro hereda de la clase Circulo, la misma deberá poseer un atributo para
almacenar la altura int _altura.
Crear un constructor que reciba cuatro parámetros, x e y para posición, radio y altura.
Dicho constructor debe llamar al constructor de su clase base y pasarle los parámetros
correspondientes para inicializar la clase base.
Crear el setter de la altura validando que no se le asignen valores menores a cero.
Crear el getter de la altura.
Sobrecargar el método superficie para que retorne el área de su circunferencia.
El área de un cilindro es igual a:
2 x (Área de la base) + (circunferencia de la base) x altura .
Crear un método volumen sabiendo que:
Volumen del cilindro = área de la base x altura.
Crear el archivo Ejer-1.cpp tal que pruebe las clases :
Circulo con un objeto usando el constructor por defecto.
Cilindro con un objeto usando el constructor parametrizado tal que:
El objeto circulo tendrá: x=1, y=5, radio=10
El objeto cilindro tendrá: x=2, y=10, radio=20, altura=5
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