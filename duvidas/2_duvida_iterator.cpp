#include <iostream>
#include <list>

using namespace std;

/* pq o qualificador const impede que a função Imprimir_um funcione?*/


// void Imprimir_um(const list<string>& v){ //codigo iriginal do professor
//     list<string>::iterator it;
//     for(it = v.begin(); it != v.end(); it++) {
//         cout << *it << endl;
//     }
// }

void Imprimir_dois(list<string>& v){ //removido o const
    for(list<string>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
}

void Imprimir_tres(const list<string>& v){ //"auto" ao invés de declarar um iterator
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
}

int main (){       
    list<string> q; // []
    string s;
        q.push_back("a"); //[a]
        q.push_back("b"); //[a b]
        q.push_front("c"); //[c a b]
        q.push_front("d"); //[d c a b]
        cout<< q.front()<< " | "<< q.back()<<endl;
    
//Imprimir_um(q);
Imprimir_dois(q);
Imprimir_tres(q);
    return 0;
}