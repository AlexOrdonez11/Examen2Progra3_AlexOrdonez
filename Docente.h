#ifndef DOCENTE_H
#define DOCENTE_H
#include <string>
#include "Persona.h"
using namespace std;

class Docente:public Persona{
	public:
		Docente(string,string,int,string);
		bool Compare(Persona*&);
		string getCodigo(){return codigoDocente;}

	private:
		string codigoDocente;
};
#endif