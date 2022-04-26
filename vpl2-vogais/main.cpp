#include <iostream>
#include <string>

using namespace std;

int main() {
string entrada;
cin>>entrada;

string comp = "aeiou";
int vet_contador[5] = { }; // o inicializador { } inicia o vetor com todos os valores == 0


for(int i=0;i<comp.size();i++){
    int c = 0;
    for (int j=0; j<entrada.size();j++){
        if (comp[i]==entrada[j]) {c++;}
    }
    vet_contador[i]=c;
}

for(int i=0;i<comp.size();i++){
  if (vet_contador[i]!=0){
    cout<< comp[i]<< " " << vet_contador[i]<<endl;
  }
}

  return 0;
}