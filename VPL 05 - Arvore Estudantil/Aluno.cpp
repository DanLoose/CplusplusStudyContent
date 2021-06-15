#include"Aluno.hpp"
#include<iostream>
using namespace std;

Aluno::Aluno(){};

Aluno::Aluno(int _matricula, string _nome){
	set_matricula(_matricula);
	set_nome(_nome);
}

int Aluno::get_matricula(){
	return matricula;
}

string Aluno::get_nome(){
	return nome;
}

int Aluno::set_matricula(int _matricula){
	matricula = _matricula;
}

string Aluno::set_nome(string _nome){
	nome = _nome;
}

void Aluno::imprimir_dados(){
	cout << matricula << " " << nome << endl;
}
