#include <iostream>

using namespace std;

int main(){

    int vlr1;
    
    
    cout << "\n\nSelecione um tipo de veiculo: \n\n";
    
    cout << "\n\n 1 - Carro | 2 - Moto | 3 - Aviao\n\n";
    
    cin >> vlr1;

    switch (vlr1)
    {
    case 1:
        cout << "\n\nCarro selecionado\n\n";
        break;
    case 2:
        cout << "\n\nMoto selecionado\n\n";
        break;
    case 3:
        cout << "\n\nAviao selecionado\n\n";
        break;
    default:
        cout << "\n\nOpcao Invalida\n\n";
        
    }

// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}