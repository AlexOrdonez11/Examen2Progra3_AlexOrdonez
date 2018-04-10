#include "Persona.h"
#include <string>

Persona::Persona(string nombre,string identidad,int edad){
	Nombre=nombre;
	id=identidad;
	this->edad=edad;
}
string Persona::toString(){
	return Nombre+"-"+id;
}
