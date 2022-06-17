#include <iostream>

using namespace std;

int main(){

    int vlr1, res=100;
    
    
    cout << "Informe um valor: \n\n";
    cin >> vlr1;
    
    (vlr1 >= 100) ? res++ : res--; //OPERADOR TERNÁRIO

    cout << "\n\nO novo valor do resultado e: " <<res<< "\n\n";

    //(res >=60) ? nota="Aluno Aprovado" : nota="Aluno Reprovado"; //OPERADOR TERNÁRIO

    // cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}