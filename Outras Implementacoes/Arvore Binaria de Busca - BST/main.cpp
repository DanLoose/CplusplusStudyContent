#include<iostream>
#include "BST.hpp"
using namespace std;

int main()
{

	BST arv;

	arv.insertNode(99);
	arv.insertNode(1);
	arv.insertNode(4);
	arv.insertNode(10);
	arv.insertNode(9);
	arv.insertNode(3);

	arv.display();

	return 0;
}
