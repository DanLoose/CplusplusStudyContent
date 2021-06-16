#include"HistoricoBovespa.hpp"
#include"Cotacao.hpp"
#include<map>
#include<iostream>
#include <iomanip>
using namespace std;

//constructors
HistoricoBovespa::HistoricoBovespa(){}

//methods
void HistoricoBovespa::inserir_cotacao(string sigla, string data, double valor){

	Cotacao novaCotacao = Cotacao(data,valor);
	historico[sigla].push_back(novaCotacao);

}

double HistoricoBovespa::calcular_valor_medio_acao(string sigla){

	double soma = 0;
	int quantidade = 0;
	vector<Cotacao>::iterator vPtr = historico[sigla].begin();
	while (vPtr != historico[sigla].end()){

		soma += (*vPtr).get_valor();
		quantidade++;
		vPtr++;

	}

	return soma/(double)quantidade;
}

Cotacao* HistoricoBovespa::recuperar_cotacao_maxima_acao(string sigla){

	map<string,vector<Cotacao>>::iterator it;
	it = historico.find(sigla); //verifica se sigla existe
	if(it == historico.end())
		return nullptr;
	else{

		vector<Cotacao>::iterator vPtr = historico[sigla].begin();
		Cotacao* max = &(*vPtr);
		while (vPtr != historico[sigla].end()){

			if(max->get_valor() < (*vPtr).get_valor())
				max = &(*vPtr);
			vPtr++;

		}
		return max;

	}
}

Cotacao* HistoricoBovespa::recuperar_cotacao_minima_acao(string sigla){

	map<string,vector<Cotacao>>::iterator it;
	it = historico.find(sigla); //verifica se sigla existe
	if(it == historico.end())
		return nullptr;
	else{

		vector<Cotacao>::iterator vPtr = historico[sigla].begin();
		Cotacao* min = &(*vPtr);
		while (vPtr != historico[sigla].end()){

			if(min->get_valor() > (*vPtr).get_valor())
				min = &(*vPtr);
			vPtr++;

		}
		return min;

	}


}

void HistoricoBovespa::imprimir_estatisticas_completas(){

    cout << setprecision(2);
    cout << fixed;

	Cotacao* min;
	Cotacao* max;

    map<string, vector<Cotacao>>::iterator vPtr = historico.begin(); //iterador para percorrer as siglas
	vPtr = historico.begin();

	while (vPtr != historico.end()){
		cout << (*vPtr).first << " ";

		min = recuperar_cotacao_minima_acao((*vPtr).first);
		max = recuperar_cotacao_maxima_acao((*vPtr).first);

		vector<Cotacao>::iterator v2Ptr = historico[(*vPtr).first].begin(); //iterador para percorrer as cortacoes das siglas
		while (v2Ptr != historico[(*vPtr).first].end()){
			cout << (*v2Ptr).get_valor() << " ";
			v2Ptr++;
		}

		cout << "| " << min->get_valor() << " " << max->get_valor() << " " << calcular_valor_medio_acao((*vPtr).first) << endl;

		vPtr++;
	}

}


