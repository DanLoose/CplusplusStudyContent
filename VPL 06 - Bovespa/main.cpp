#include"HistoricoBovespa.hpp"
#include<iostream>
using namespace std;

// NÃO ALTERE ESSA LINHA

int main() {

    // NÃO ALTERE ESSA LINHA


    //
    // Adicione seu código aqui e faça as demais alterações necessárias
    //
    HistoricoBovespa h1;

    h1.inserir_cotacao("VALE", "14/06/2021", 95.26);
    h1.inserir_cotacao("VALE", "14/06/2021", 96.00);

    cout << h1.historico.count("VALE");

    //
    // Ao final faça uma chamada para o método 'imprimir_estatisticas_completas()'
    //

    return 0;
}
