#include <iostream>
#include <map>
#include <string>

using namespace std;

void Imprimir(const map<string, int>& x){
    map<string, int>::const_iterator it;
    for (it = x.begin();it != x.end();it++){
        cout<< (*it).first << ": "<<(*it).second<< endl;
    }
}


int main (){       

map<string,int> s;
string nome;
//int saldo;

while (cin>>nome){
//cout<<nome<< " " <<saldo <<endl;

if(s.find(nome) == s.end()){ //se a string inserida nao for encontrada
   s[nome]= 1;                 //insere a string com valor chave 0
//   cout<<nome<< " "<< saldo <<endl;
}
else {                      //se a string for encontrada
 s[nome]++;                 //adiciona 1 ao valor encontrado
//cout<<"adicionei "<<saldo<<" a "<< nome <<endl;
}

}

Imprimir(s);
    return 0;
}

//      g++ main.cpp -o programa
//      ./programa < in.txt
//      git add-commit -m "message"
//      git pu