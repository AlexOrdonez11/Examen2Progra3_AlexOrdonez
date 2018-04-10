#include"Double.h"

Double::Double(double numero){
	this->numero=numero;
}
bool Double::operator==(Double* dou){
	if(dou->getDouble()==numero){
		return true;
	}else{
		return false;
	}
}
double Double:: operator*(Double* dou){
	return dou->getDouble()*getDouble();
}
