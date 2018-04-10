#include "Docente.h"
#include "Persona.h"
#include<string>

Docente::Docente(string nombre,string id,int edad,string codigoDocente):Persona(nombre,id,edad){
	this->codigoDocente=codigoDocente;
}
bool Docente::Compare(Persona*& per){
	if(dynamic_cast<Docente*>(per)!=NULL){
		if(dynamic_cast<Docente*>(per)->getCodigo()==getCodigo()){
			return true;
		}
	}else{
		return false;
	}
}