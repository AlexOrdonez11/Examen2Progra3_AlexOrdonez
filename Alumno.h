#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
#include "Persona.h"

using namespace std;

class Alumno:public Persona
{
	private:
		string cuenta;
	public:
		Alumno(string,string,int ,string);
		bool Compare(Persona*&);
		string getCuenta(){return cuenta;}
		~Alumno();
	
};
#endif
