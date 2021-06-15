#include <iostream>
#include "Circunferencia.hpp"
using namespace std;

int main(int argc, char const *argv[])
{

	Circunferencia* circ = new Circunferencia(0,0,10);

	cout << circ->calcularArea() << endl;

	delete circ;
	return 0;
}
