// #include <iostream>
// #include <vector>
// #include <map>
// #include <string>

// using namespace std;

// void Imprimir(const map<string, double>& x){
//     map<string, double>::const_iterator it;
//     for (it = x.begin();it != x.end();it++){
//         cout<< (*it).first << ": "<<(*it).second<< endl; //ou         cout<< it->first << ": "<< it->second<< endl;
//     }
// }

// int main (){       
// map<string,double> s;
// string nome;
// double saldo;
// while (cin>>nome>>saldo){
//     map<string, double>::iterator it;
//     if (s.find((*it).nome) != s.end()){

//     }
//    s[nome] =saldo;
// }
// Imprimir(s);
//     return 0;
// }

// Joao 1.1
// Maria 2.2
// Thiago 3.3
// Ana 4.4
// Joao 8.9
// Maria 7.8
// Thiago 6.7
// Ana 5.6

//---------------------------------------------------------------------------------
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
   s[nome]= 0;                 //insere a string com valor chave 0
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
// g++ arquivodeteste.cpp -o programateste
// ./programateste <in.txt

//in.txt contem:
// Joao 1.1
// Maria 2.2
// Thiago 3.3
// Ana 4.4
// Joao 8.9
// Maria 7.8
// Thiago 6.7
// Ana 5.6