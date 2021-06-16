#ifndef HISTORICOBOVESPA_H
#define HISTORICOBOVESPA_H
#include"Cotacao.hpp"
#include<map>
#include<iostream>
#include<vector>
using namespace std;

struct HistoricoBovespa{

	map<string,vector<Cotacao>> historico; 

	//constructors
	HistoricoBovespa();

	//methods
	void inserir_cotacao(string sigla, string data, double valor);
	double calcular_valor_medio_acao(string sigla);
	Cotacao* recuperar_cotacao_maxima_acao(string sigla);
	Cotacao* recuperar_cotacao_minima_acao(string sigla);
	void imprimir_estatisticas_completas();

};



#endif
