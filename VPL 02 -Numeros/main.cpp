#include<iostream>
using namespace std;

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
        parSemRepetir[a] = -1;
        imparSemRepetir[a] = -1;
     }

    while(cin.peek() != '\n'){
        cin >> entrada;
        (entrada%2 == 0)? pares[i++] = entrada : impares[j++] = entrada;
    }

    for (int a = 0; a < 20; a++){
        for(int b = 0; b < 20;b ++){
            if(parSemRepetir[b] == -1){
                parSemRepetir[b] = pares[a];
                b = 20;
            }else if(pares[a] == parSemRepetir[b]) b = 20;
        }
     }
     for (int a = 0; a < 20; a++){
        for(int b = 0; b < 20;b ++){
            if(imparSemRepetir[b] == -1){
                imparSemRepetir[b] = impares[a];
                b = 20;
            }else if(impares[a] == imparSemRepetir[b]) b = 20;
        }
     }

     for(int a = 0; a < 20; a ++){
        if(parSemRepetir[a] != -1) cout << parSemRepetir[a] << ' ';
     }
     cout << endl;
     for(int a = 0; a < 20; a ++){
        if(imparSemRepetir[a] != -1) cout << imparSemRepetir[a] << ' ';
     }

    return 0;
}
