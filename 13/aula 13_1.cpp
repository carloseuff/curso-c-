#include <iostream>

using namespace std;

int main(){

    int vlr1;
        
    cout << "\n\nSelecione um tipo de veiculo: \n\n";
    
    cout << "\n\n1 <-> 10 -> Carro | 11 <-> 20 -> Moto | 21 <-> 30 -> Aviao\n\n";
    
    cin >> vlr1;

    switch (vlr1){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:

            cout << "\n\nCarro selecionado\n\n";
            break;
        case 20:
            cout << "\n\nMoto selecionado\n\n";
            break;
        case 30:
            cout << "\n\nAviao selecionado\n\n";
            break;
    default:
        cout << "\n\nOpcao Invalida\n\n";
        }

// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}