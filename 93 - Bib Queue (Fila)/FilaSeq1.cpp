#include <iostream>
#include <queue>

using namespace std;

constexpr int MAXN = 100; // capacidade máxima da fila

class FilaSeq1{

char elementos [MAXN];
int N;
void cria ();
void libera ();
char frente ();
void enfileira (char dado);
char desenfileira ();
};

void cria (){
this->N = 0;    
}
char frente (){
return this->elementos[0];
}
void enfileira(char dado){
this->elementos[N] = dado;
this->N++;
}
char desenfileira(){
char r = this->elementos[0];
for (int i=0; i<N-1; i++) 
this->elementos[i] = this->elementos[i+1]; 
this->N--; 
return r;
}


int main(){

FilaSeq1 *p=new FilaSeq1();

p->cria(); 
p->enfileira('A'); 
p->enfileira('B'); 
p->enfileira('C');

std::cout <<p->frente();
std::cout <<p->desenfileira();

p->enfileira('D');

while (p->N > 0){
cout <<p->desenfileira();
}


p->libera();

return 0;
}

