// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_bst.hpp"
#include<iostream>
using namespace std;

int main() {
  
    // NÃO ALTERE ESSA LINHA
    avaliacao_basica();


    //
    // Adicione seu código aqui e faça as demais alterações necessárias
    //
    BST bst;

    int matricula;
    string nome;

    for(int i = 0; i < 10; i++){
        cin >> matricula >> nome;
        bst.inserir_aluno({matricula, nome});
    }

    //
    // Ao final faça uma chamada para o método 'imprimir_arvore()'
    //
    bst.imprimir_arvore();


    return 0;
}