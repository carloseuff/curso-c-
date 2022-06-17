#include <iostream>

using namespace std;

int main(){

//TIPO NOME;
//TIPO NOME = VALOR;

int vidas=0; // 10, 25
char letra='B'; //'B'
double decimal=5.2; //2.499999
float decimal2=5.2; //2.5
bool vivo=true; //true=vdd / false=falso
string nome="kaduse"; //"kaduse"

cout << "Informe o n�mero de vidas: ";
cin >> vidas;
cout << "Informe uma LETRA: ";
cin >> letra;
cout << "Informe o n�mero de Dinheiro: ";
cin >> decimal;
cout << "Informe sua Idade: ";
cin >> decimal2;
cout << "Informe seu nome: ";
cin >> nome;

cout << "\nVidas: " <<vidas<< "\nLetra" <<letra<< "\nDinheiro: " <<decimal<< "\nIdade: " <<decimal2<< "\nNome: " <<nome<<"\n";



return 0;
}
