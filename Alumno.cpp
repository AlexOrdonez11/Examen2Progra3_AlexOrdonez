#include"Persona.h"
#include "Alumno.h"
#include<string>

Alumno::Alumno(string nombre,string id,int edad,string cuenta):Persona(nombre,id,edad){
	this->cuenta=cuenta;
}
bool Alumno::Compare(Persona*& per){
	if(dynamic_cast<Alumno*>(per)!=NULL){
		if(dynamic_cast<Alumno*>(per)->getCuenta()==getCuenta()){
			return true;
		}
	}else{
		return false;
	}
}