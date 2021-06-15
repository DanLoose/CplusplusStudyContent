#include "BST.hpp"
#include<iostream>
using namespace std;

NodeT::NodeT(){};

NodeT* criarNo(Aluno aluno){
	NodeT* novo = new NodeT;
	novo->aluno = aluno;
	novo->esq = nullptr;
	novo->dir = nullptr;
	return novo;
}

BST::BST(){};

void BST::inserir_aluno_aux(NodeT* node, Aluno aluno){
	if(aluno.matricula < node->aluno.matricula){		//entra na esqueda

		if(node->esq != nullptr) inserir_aluno_aux(node->esq, aluno);
		else node->esq = criarNo(aluno);

	}else if(aluno.matricula > node->aluno.matricula){	//entra da direita

		if(node->dir != nullptr) inserir_aluno_aux(node->dir, aluno);
		else node->dir = criarNo(aluno);

	}
}


void BST::inserir_aluno(Aluno aluno){

	if(root != nullptr){
		inserir_aluno_aux(root, aluno);
	}else{
		root = criarNo(aluno);
	}
}


Aluno* BST::procurar_aluno_aux(NodeT* n, int matricula){

	if(matricula == n->aluno.matricula){
		return &n->aluno;
	} else if(n->esq != nullptr){
		procurar_aluno_aux(n->esq, matricula);
	}else if(n->dir !=nullptr){
		procurar_aluno_aux(n->dir, matricula);
	}else{
		return nullptr;
	}
}

Aluno* BST::procurar_aluno(int matricula){
	procurar_aluno_aux(root , matricula);
}

void inorder(NodeT* n){
	if(n == nullptr) return;

	inorder(n->esq);
	cout << n->aluno.matricula << " " << n->aluno.nome << endl;
	inorder(n->dir);
}

void BST::imprimir_arvore(){
	inorder(root);
	cout << endl;
}



