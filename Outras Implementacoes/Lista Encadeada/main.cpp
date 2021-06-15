#include<iostream>
#include "Lista.hpp"
using namespace std;

int main()
{

	Lista l1;
	l1.insertNode(111);
	l1.insertNode(222);
	l1.insertNode(333);

	l1.display();
	l1.removeNode(111);
	l1.display();

	cout << l1.isInList(222) << endl;
	cout << l1.isInList(111) << endl;

	l1.display();
	l1.deleteLista();
	l1.display();

	return 0;
}
