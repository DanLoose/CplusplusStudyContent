#include "Lista.hpp"
#include<iostream>
using namespace std;

void Lista::insertNode(int data){

	Node* novo = new Node;
	novo->next = nullptr;
	novo->data = data;

	if(head == nullptr){
		head = novo;
		tail = novo;
	}else{
		tail->next = novo;
		tail = novo;
	}
    tam++;
}

void Lista::removeNode(int data){

	Node* atual = head;
	Node* anterior = nullptr;

	while(atual != nullptr){
		if(atual->data	== data){
			if( atual == head){
				head = atual->next;
			}else if(atual->next = nullptr){
				anterior->next = nullptr;
				tail = anterior;
			}else{
				anterior->next = atual->next;
			}

			delete atual;
			tam--;
			return;
		}

		anterior = atual;
		atual = atual->next;
	}
}


bool Lista::isInList(int data){
	Node* atual = head;
	while(atual != nullptr){
		if (atual->data == data) return true;
		atual = atual->next;
	}
	return false;
}

void Lista::deleteLista(){

	while(head != nullptr){
		Node* atual = head;
		head = head->next;
		delete atual;
	}
}

void Lista::display(){
    Node* atual = head;
    while(atual != nullptr){
        cout << atual->data << endl;
        atual= atual->next;
    }
    cout << endl;
}
