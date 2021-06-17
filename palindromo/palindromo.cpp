#include<iostream>
#include<string>
using namespace std;

bool palindromo(string palavra){


	for(int i = 0, j = palavra.length()-1; i < palavra.length() ; i++, j--){
		if(palavra.at(i) != palavra.at(j) ) return false;
	}

	return true;

}


int main(){


    string p;
    bool confere;
    while(cin>>p){
        confere = palindromo(p);
        if(confere == true) cout << p << " eh palindromo" << endl;
        else cout << p << " nao eh palindromo" << endl;
        cout << endl;
    }


	return 0;
}
