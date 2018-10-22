#include "Televisor.h"	

Televisor::Televisor(){
	_canal = 2;
	_brillo = 50;
	cout<<"el Televisor ";
}
Televisor::Televisor(bool encendido, int canal,int brillo):DispElect(encendido){
	_canal = canal;
	_brillo = brillo;
}
Televisor::~Televisor(){
	cout<<"el Televisor ";
}
void Televisor::setCanal(int canal){
	_canal = canal;
}
int Televisor::getCanal(){
	return _canal;
}
void Televisor::setBrillo(int brillo){
	_brillo = brillo;
}
int Televisor::getBrillo(){
	return _brillo;
}
void Televisor::verTodo(){
	cout<<"encendido: "<<getEncendido()<<"  canal: "<<_canal<<"  brillo: "<<_brillo;
}