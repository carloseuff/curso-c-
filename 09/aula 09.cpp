#include <iostream>

using namespace std;

int main(){

    int num;
    char opc='s';

    cout << "Informe a temperatura ambiente: ";
    cin >> num;

// TESTES LÓGICOS -> > < >= <= == !=

    if (num != 30)
    {
        cout << "\n\nTempo buam pra tomar uma gelada\n\n";
    }else
    {
        cout << "\n\nTempo ruin pra tomar uma gelada\n\n";
    }

    
// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}