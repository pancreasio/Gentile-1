#include "DispElect.h"

DispElect::DispElect(){
	_encendido = false;
}
DispElect::DispElect(bool encendido){
	_encendido = encendido;
}
DispElect::~DispElect(){

}
void DispElect::encender(){
	_encendido = !_encendido;
}
bool DispElect::getEncendido(){
	return _encendido;
}