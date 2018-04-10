#ifndef DOUBLE_H
#define DOUBLE_H

using namespace std;

class Double{
	private:
		double numero;
	public:
		Double(double);
		double getDouble(){return numero;}
		//sobrecarga del operacion de multiplicacion
	 	double operator*(Double*);
	 	//sobrecarga del operador de comparacion
		bool operator==(Double*);

	
};
#endif