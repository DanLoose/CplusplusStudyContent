#ifndef HISTORICOBOVESPA_H
#define HISTORICOBOVESPA_H
#include"Cotacao.hpp"
#include<map>
#include<vector>
using namespace std;

struct HistoricoBovespa{

	multimap<string, Cotacao> historico;

	//constructors
	HistoricoBovespa();

	//methods
	void inserir_cotacao(string sigla, string data, double valor);
	double calcular_valor_medio_acao(string sigla);

};



#endif
