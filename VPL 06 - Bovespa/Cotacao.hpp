#ifndef COTACAO_H
#define COTACAO_H
#include<iostream>
using namespace std;

struct Cotacao
{
	string data;	
	double valor;

	//constructors
	Cotacao();
	Cotacao(string , double);

	//setters
	void set_data(string);
	void set_valor(double);

	//getters
	string get_data();
	double get_valor();

};


#endif