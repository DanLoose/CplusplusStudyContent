#include<iostream>
using namespace std;

int *numerosSemRepetir(int vetor[],int tamanhoVetor){
    int vetorSR[20];
    for (int a = 0; a < 20; a++){
        vetorSR[a] = -1;
     }

    for (int a = 0; a < 20; a++){
        for(int b = 0; b < 20;b ++){
            if(vetorSR[b] == -1){
                vetorSR[b] = vetor[a];
                b = 20;
            }else if(vetor[a] == vetorSR[b]) b = 20;
        }
     }
     return vetorSR;
}

int main(){

    int entrada;
    int pares[20];
    int impares[20];
    int parSemRepetir[20];
    int imparSemRepetir[20];
    int i = 0;
    int j = 0;

    for (int a = 0; a < 20; a++){
        pares[a] = -1;
        impares[a] = -1;
     }

    while(cin.peek() != '\n'){
        cin >> entrada;
        (entrada%2 == 0)? pares[i++] = entrada : impares[j++] = entrada;
    }

    imparSemRepetir = &numerosSemRepetir(imparSemRepetir,20);
    parSemRepetir = &numerosSemRepetir(parSemRepetir,20);

     for(int a = 0; a < 20; a ++){
        if(parSemRepetir[a] != -1) cout << parSemRepetir[a] << ' ';
     }
     cout << endl;
     for(int a = 0; a < 20; a ++){
        if(imparSemRepetir[a] != -1) cout << imparSemRepetir[a] << ' ';
     }

    return 0;
}

