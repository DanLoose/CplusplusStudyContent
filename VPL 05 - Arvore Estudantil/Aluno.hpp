#ifndef	ALUNO_H
#define ALUNO_H
#include<iostream>
using namespace std;

struct Aluno{

	int matricula;
	string nome;

	//costructors
	Aluno();
	Aluno(int, string);

	//getters
	int get_matricula();
	string get_nome();

	//setters
	int set_matricula(int);
	string set_nome(string);

	//other methods
	void imprimir_dados();

};

#endif
