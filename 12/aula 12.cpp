#include <iostream>

using namespace std;

int main(){

    int nota1, nota2, res;
    string nota;
    
    cout << "Informe a nota 01: \n\n";
    cin >> nota1;
    cout << "\n\nInforme a nota 02: \n\n";
    cin >> nota2;

    res=nota1+nota2;

    cout << "\n\nO valor do resultado e: " <<res<< "\n\n";

    //(res >=60) ? nota="Aluno Aprovado" : nota="Aluno Reprovado"; //OPERADOR TERNÁRIO

    nota=(res >= 60) ? nota="Aluno Aprovado" : nota="Aluno Reprovado";
    
    cout << "\n\nSituacao do Aluno e: " <<nota<< "\n\n";    
    
    


// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}