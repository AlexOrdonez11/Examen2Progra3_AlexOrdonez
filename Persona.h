#ifndef PERSONA_H
#define PERSONA_H
#include<string>
using namespace std;

class Persona{
	private:
		string Nombre;
		string id;
		int edad;
	public:
		Persona(string,string,int);
		//metodo virtual puro polimorfico para comparar personas
		virtual bool Compare(Persona*&)=0;
		virtual string toString();
};
#endif