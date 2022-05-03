#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
    ifstream fin("entrada.txt");
    string linha;
    while (getline(fin, linha)){        //esse getline serve para iterar por cada linha
        stringstream sin(linha);
        string nome;
        getline(sin, nome, ';');        //esse nested getline serve para iterar por dentro de uma propria linha
        cout<< "nome: "<< nome <<endl;

        string idade;
        getline(sin, idade, ';');
        cout<< "idade: "<< idade <<endl;

        string profissao;
        getline(sin, profissao, ';');
        cout<< "profissão: "<< profissao <<endl;
        cout<<endl;
    }
    return 0;
}
    // g++ teste2.cpp -o programateste2
    // ./programateste2