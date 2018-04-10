#include"Persona.h"
#include "Alumno.h"
#include "Docente.h"
#include <iostream>
#include<fstream>
#include "Double.h"
#include <string>
#include<vector>

using namespace std;

//guarda vector de 10 personas
void Guardar(vector<Persona*>);
//crea vector de 10 personas 
void Ejercicio1();
//Prueba sobrecarga de operaciones
void Ejercicio2();
//Lee archivo y escribe los resultados
void Ejercicio3();

int main(){
	int opt=0;
	while(opt!=4){
		cout<<"menu"<<endl;
		cout<<"1.-Ejercicio 1"<<endl;
		cout<<"2.-Ejercicio 2"<<endl;
		cout<<"3.-Ejercicio 3"<<endl;
		cout<<"4.-Salir"<<endl;
		cout<<"---------------------"<<endl;
		cin>>opt;
		switch(opt){
			case 1:
				Ejercicio1();
				break;
			case 2:
				Ejercicio2();
				break;
			case 3:
				Ejercicio3();
		}
	}

}
void Ejercicio1(){
	vector<Persona*> personas;
	//creacion de 10 personas para las pruebas del examen
	personas.push_back(new Alumno("Alex","0801",18,"11711139"));
	personas.push_back(new Alumno("Jorge","0802",18,"11711"));
	personas.push_back(new Alumno("Gracia","0801",18,"11711139"));
	personas.push_back(new Docente("Kath","0701",18,"117139"));
	personas.push_back(new Docente("Genesis","0901",18,"11711139"));
	personas.push_back(new Docente("Ana","1801",18,"139"));
	personas.push_back(new Alumno("Valeria","0831",18,"11139"));
	personas.push_back(new Alumno("Yadira","0801",18,"1171113"));
	personas.push_back(new Docente("Nutri","0891",18,"139"));
	personas.push_back(new Alumno("Jimena","0201",18,"39"));
	int opt=0;
	cout<<"1.-Comparar dos personas"<<endl;
	cout<<"2.-Guardar"<<endl;
	cout<<"---------------------------"<<endl;
	cin>>opt;
	int po1,po2;
	if(opt!=2){
		for(int i=0;i<personas.size();i++){
			cout<<i<<".-"<<personas[i]->toString()<<endl;
		}
	}
	switch(opt){
		case 1:
			cout<<"Ingrese las posiciones que quiere comparar"<<endl;
			cin>>po1;
			cin>>po2;
			if(personas[po1]->Compare(personas[po2])){
				cout<<"Son iguales"<<endl;
			}else{
				cout<<"No sn iguales"<<endl;
			}
			break;
		case 2:
			
			break;
	}
	for(int i=0;i<personas.size();i++){
		delete personas[i];
	}
}
void Guardar(vector<Persona*>& personas){
	ofstream archivo("Personas.txt",ios::app);
	if(archivo.is_open()){
		for (int i = 0; i < personas.size(); ++i){
			if(dynamic_cast<Alumno*>(personas[i])!=NULL){
				archivo<<dynamic_cast<Alumno*>(personas[i])->toString()<<"-"<<dynamic_cast<Alumno*>(personas[i])->getCuenta()<<endl;
			}else{
				archivo<<dynamic_cast<Docente*>(personas[i])->toString()<<"-"<<dynamic_cast<Docente*>(personas[i])->getCodigo()<<endl;
			}
		}
	}
}
void Ejercicio2(){
	double double1,double2;
	cout<<"Ingrese el valor del primer double"<<endl;
	cin>>double1;
	Double* Double1=new Double(double1);
	cout<<"Ingrese el valor del segundo double"<<endl;
	cin>>double2;
	Double* Double2=new Double(double2);
	int op;
	cout<<"1.-Multiplicar *"<<endl;
	cout<<"2.-Comparar =="<<endl;
	cin>>op;
	if(op==1){
		double result= *Double1 * Double2;
		cout<<"El resultado es "<<result<<endl;
	}else{
		if(*Double1==Double2){
			cout<<"son iguales"<<endl;
		}else{
			cout<<"no son iguales"<<endl;
		}
	}
	delete Double1;
	delete Double2;
}
void Ejercicio3(){
	//aqui se lee el archivo y tambien se imprime
	vector<string> Personas;
	ifstream archivo("Personas.txt");
	string line;
	if(!archivo.is_open()){
		archivo.open("Personas.txt",ios::in);
	}
	while(getline(archivo,line)){
		Personas.push_back(line);
	}
	cout<<"----------------------------------"<<endl;
	cout<<"Se leyo el archivo:"<<endl;
	archivo.close();
	for(int i=0;i<Personas.size();i++){
		cout<<Personas[i]<<endl;
	}
	cout<<"----------------------------------"<<endl;

}
