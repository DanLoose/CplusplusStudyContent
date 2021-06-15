#ifndef LISTA_H
#define LISTA_H

#include<iostream>
struct Node{

	int data;
	Node* next;

};

struct Lista{
	Node* head = nullptr;
	Node* tail = nullptr;
	int tam = 0;

	void insertNode(int data);
	void removeNode(int data);
	bool isInList(int data);
	void deleteLista();
	void display();
};

#endif
