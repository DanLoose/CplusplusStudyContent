#include "BST.hpp"
#include<iostream>
using namespace std;

NodeT* createNode(int data){
	NodeT* novo = new NodeT;
	novo->data = data;
	novo->esq = nullptr;
	novo->dir = nullptr;
	return novo;
}


void BST::insertNodeHelper(NodeT* node, int data){

	if(data < node->data){		//entra na esqueda

		if(node->esq != nullptr) insertNodeHelper(node->esq, data);
		else node->esq = createNode(data);

	}else if(data > node->data){	//entra da direita

		if(node->dir != nullptr) insertNodeHelper(node->dir, data);
		else node->dir = createNode(data);

	}
}


void BST::insertNode(int data){

	if(root != nullptr){
		insertNodeHelper(root, data);
	}else{
		root = createNode(data);
	}
}

void inorder(NodeT* n){
	if(n == nullptr) return;

	inorder(n->esq);
	cout << n->data << " ";
	inorder(n->dir);
}

void BST::display(){
	inorder(root);
	cout << endl;
}
