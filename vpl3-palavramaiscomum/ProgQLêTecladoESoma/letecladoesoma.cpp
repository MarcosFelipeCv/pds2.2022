#include <iostream>
#include <map>
#include <string>

using namespace std;

void Imprimir(const map<string, double>& x){
    map<string, double>::const_iterator it;
    for (it = x.begin();it != x.end();it++){
        cout<< (*it).first << ": "<<(*it).second<< endl;
    }
}


int main (){       

map<string,double> s;
string nome;
double saldo;

while (cin>>nome>>saldo){
//cout<<nome<< " " <<saldo <<endl;

if(s.find(nome) == s.end()){
   s[nome]=saldo;
//   cout<<nome<< " "<< saldo <<endl;
}
else {
 s[nome] += saldo;
//cout<<"adicionei "<<saldo<<" a "<< nome <<endl;
}

}

Imprimir(s);
    return 0;
}

//g++ letecladoesoma.cpp -o programaletecladoesoma
// ./programaletecladoesoma < innotas.txt

//conteudo inntoas se apagado

// Joao 1.1
// Maria 2.2
// Thiago 3.3
// Ana 4.4
// Joao 8.9
// Maria 7.8
// Thiago 6.7
// Ana 5.6