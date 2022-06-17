#include <iostream>

using namespace std;

int main(){

int num;

// intervalo numeros: 10 - 20 | OPERADORES: and -> &&, or -> ||, not -> ! 

cout << "\n\nInforme o numero desejado: ";
cin >>num;

//if (num > 10 && num <20)
//if ((num > 10 && num <15) || (num >= 0 && num <10) || (num > 15 && num <=20))

if (!num)
{
    cout << "\n\nValor aceito no intervalo\n\n";
}else
{
    cout << "\n\nValor Nao aceito no intervalo\n\n";
}

// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}