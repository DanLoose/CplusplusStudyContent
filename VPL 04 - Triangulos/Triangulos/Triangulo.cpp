#include "Triangulo.hpp"
#include <math.h>

Triangulo::Triangulo(Ponto2D a, Ponto2D b, Ponto2D c){
	p1 = a;
	p2 = b;
	p3 = c;
}

double Triangulo::calcular_perimetro(){
    double a,b,c;
    a = p1.calcular_distancia(p3);
    b = p1.calcular_distancia(p2);
    c = p2.calcular_distancia(p3);
    return (a+b+c);
}

double Triangulo::calcular_area(){
	double p = (calcular_perimetro()/2);	//metade do perímetro para o calculo de heron
	return sqrt(p   //formula de heron
                *(p - p1.calcular_distancia(p3))    //(p-a)
                *(p - p1.calcular_distancia(p2))    //(p-b)
                *(p - p2.calcular_distancia(p3)));   //(p-c)
}

int Triangulo::comparar_area(Triangulo *triangulo){
	if(calcular_area() < triangulo->calcular_area()) return -1;
	if(calcular_area() == triangulo->calcular_area()) return 0;
	if(calcular_area() > triangulo->calcular_area()) return 1;

}
