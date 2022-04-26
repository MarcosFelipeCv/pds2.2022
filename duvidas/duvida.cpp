#include <iostream>
#include <string>

using namespace std;

/* 
explicação:
com ou sem o integer tipe "size_t", não consigo encapsular uma função que retorna o tamanho de um vetor de int
Por algum motivo, apesar de ambas as funções parecerem ter sintaxe correta, elas não funcionam.
Elas ambas retornam um tamanho de vetor errado (2 ao invés de 5), e eu queria entender o motivo.
Não entendi o que o warning significa.
*/

//função sem size_t
int tamanho_vet(int v[]){
  return sizeof(v)/sizeof(v[0]);
}

//função com size_t
int tam_vet (int arr[]){
  size_t n = sizeof(arr)/sizeof(arr[0]);
  return n;
}

int main() {
    
  int vetor[20] = { }; //vetor com todos os valores == 0

  //essa linha corretamente imprime o tamanho do vetor
  cout<< "tamanho do vetor pela main: "<<sizeof(vetor)/sizeof(vetor[0])<<endl;

  //mas quando eu encapsulo uma função igual, ela retorna um warning, e imprime 2 ao invés de 5
  cout<< "tamanho do vetor pela função encapsulada SEM o size_t: " << tamanho_vet(vetor) <<endl;

  //nem mesmo quando eu uso o integer type size_t ela retorna o valor correto
  cout<< "tamanho do vetor pela função encapsulada COM o size_t: " << tam_vet(vetor) <<endl;


  //Ambas funções sempre retornam 2 independente do tamanho do vetor

  return 0;
}