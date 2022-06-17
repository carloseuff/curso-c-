#include <iostream>


using namespace std;

int main(){

int nota1, nota2, nota3, result;
char opc;

begin:

system("cls");

cout << "\n\nInforma a Nota 01: \n\n";
cin >> nota1;
cout << "\n\nInforma a Nota 02: \n\n";
cin >> nota2;
cout << "\n\nInforma a Nota 03: \n\n";
cin >> nota3;

result=nota1+nota2+nota3;

if (result >=60)
{
    cout << "\n\nAluno Aprovado\n\n";
}else if (result >=40)
{
    cout << "\n\nAluno em Recuperacao\n\n";
}else
{
    cout << "\n\nAluno Reprovado\n\n";
}
cout << "\n\nDeseja Informa outras Notas [S/s]: ";
cin >> opc;

if (opc =='s' or opc =='S')
{
    goto begin;
}

// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}