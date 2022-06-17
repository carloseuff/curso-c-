#ifndef objeto01_H_included
#define objeto01_H_included

class objeto01
{
private:

public:

int vlr=0, vlr_unit=0, estoque=0;
std::string nome, tipo, marca;
void cad(char dados);
void impressao();

};

void objeto01::cad(char dados){

if (dados=='a'){
    nome="PRODUTO01";
    tipo="A";
    marca="BRANCA";
    std::cout <<"\nFavor Informar Estoque...: ";
    std::cin >> estoque;
}else if (dados=='b'){
    nome="PRODUTO02";
    tipo="B";
    marca="CINZA";
    std::cout <<"\nFavor Informar Estoque...: ";
    std::cin >> estoque;
}else if(dados=='c'){
    nome="PRODUTO03";
    tipo="C";
    marca="PRETA";
    std::cout <<"\nFavor Informar Estoque...: ";
    std::cin >> estoque;
}
}
void objeto01::impressao(){
    std::cout << "\n\nNome do Pruduto: " << nome <<"\nTipo do Produto: "<< tipo <<"\nMarca do Prduto: "<< marca <<"\nQdte. em Estoque: "<< estoque;
}

#endif