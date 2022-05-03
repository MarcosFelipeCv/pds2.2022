#include <iostream>
#include <vector>
#include <set>

using namespace std;

void Imprimir(const set<string>& x){
    set<string>::iterator it;
    for (it = x.begin();it != x.end();it++){
        cout<< *it << endl;

    }

}

int main (){       
set<string> s;
string nome;
while (cin>>nome){
    s.insert(nome);
}
Imprimir(s);
    return 0;
}