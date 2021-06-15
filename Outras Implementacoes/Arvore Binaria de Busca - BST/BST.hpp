#ifndef BST_H
#define BST_H


struct NodeT{

	int data;
	NodeT* esq;
	NodeT* dir;

};

struct BST{

	NodeT* root = nullptr;

	void insertNodeHelper(NodeT* root, int data);
	void insertNode(int data);
	void removeNode(int data);
	void display();

};

#endif
