#include "Cotacao.hpp"
#include<iostream>
using namespace std;


//constructors
Cotacao::Cotacao(){}
Cotacao::Cotacao(string _data, double _valor){
	set_data(_data);
	set_valor(_valor);
}

//setters
void Cotacao::set_data(string _data){
	data = _data;
}
void Cotacao::set_valor(double _valor){
	valor = _valor;
}

//getters
string Cotacao::get_data(){
	return data;
}
double Cotacao::get_valor(){
	return valor;
}