#include"HistoricoBovespa.hpp"
#include<map>
#include<iostream>
using namespace std;

//constructors
HistoricoBovespa::HistoricoBovespa(){}

//methods
void HistoricoBovespa::inserir_cotacao(string sigla, string data, double valor){

	historico.insert(pair<string,Cotacao> (sigla, {data, valor}));

}

double HistoricoBovespa::calcular_valor_medio_acao(string sigla){

	double soma = 0;
	for (std::multimap<string,Cotacao>::iterator it=historico.begin(); it!=historico.end(); ++it)



}
