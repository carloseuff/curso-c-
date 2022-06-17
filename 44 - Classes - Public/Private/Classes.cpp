#include <iostream>

using namespace std;

class objeto01
{
private:
public:

int vlr=0, vlr_unit=0, estoque=0;
string nome, tipo, marca;

void cad(char dados);

};

void objeto01::cad(char dados){
if (dados=='a'){
    this->nome="PRODUTO01";
    this->tipo="A";
    this->marca="BRANCA";
    cout <<"\nFavor Informar Estoque...: ";
    cin >> estoque;
}else if (dados=='b'){
    this->nome="PRODUTO02";
    this->tipo="B";
    this->marca="CINZA";
    cout <<"\nFavor Informar Estoque...: ";
    cin >> estoque;
}else if(dados=='c'){
    this->nome="PRODUTO03";
    this->tipo="C";
    this->marca="PRETA";
    cout <<"\nFavor Informar Estoque...: ";
    cin >> estoque;
}
}

int main(){

objeto01 *obj1=new objeto01();

obj1->cad('a');

cout << "\n\nNome do Pruduto: " << obj1->nome <<"\nTipo do Produto: "<< obj1->tipo <<"\nMarca do Prduto: "<< obj1->marca <<"\nQdte. em Estoque: "<< obj1->estoque;


return 0;    
}
