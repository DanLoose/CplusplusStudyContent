#ifndef BST_H
#define BST_H
#include "Aluno.hpp"


struct NodeT{

	Aluno aluno;
	NodeT* esq;
	NodeT* dir;

	NodeT();

};

struct BST{

	NodeT* root = nullptr;

	BST();
	void inserir_aluno_aux(NodeT*, Aluno);
	Aluno* procurar_aluno_aux(NodeT* n, int matricula);

	void inserir_aluno(Aluno aluno);
	void imprimir_arvore();
	Aluno* procurar_aluno(int matricula);

};





#endif
