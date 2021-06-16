
// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_bovespa.hpp"

int main() {

    // NÃO ALTERE ESSA LINHA
    avaliacao_basica();


    //
    // Adicione seu código aqui e faça as demais alterações necessárias
    //
    string sigla;
    string data;
    double valor;

    HistoricoBovespa h1;

    while(cin>>sigla>>data>>valor){
        h1.inserir_cotacao(sigla,data,valor);
    }

    //
    // Ao final faça uma chamada para o método 'imprimir_estatisticas_completas()'
    //
    h1.imprimir_estatisticas_completas();

    return 0;
}
