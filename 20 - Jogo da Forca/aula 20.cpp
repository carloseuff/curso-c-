#include <iostream>
using namespace std;
int main(){
char palavra[30],letra[1],secreta[30],dica[30];
int tam,i,chances,acertos;
bool acerto;
chances=6;
tam=0;
i=0;
acerto=false;
acertos=0;
cout << "\n\nFale para seu colega fechar os ZOios e Digite a PALAVRA SECRETA:\n\n";
cin >>palavra;
system("cls");
cout << "\n\nEscreva uma dica: ";
cin>>dica;
while (palavra[i] != '\0'){
    i++;
    tam++;
}
for (i=0;i<30;i++)
    secreta[i]='_';
while ((chances>0)&&(acertos<tam)){
    cout << "Chances Restantes: " << chances << "\n\n";
    cout << "Palavra Secreta: ";
    for (i=0; i<tam; i++){
        cout << secreta[i];
    }
    cout << "\n\n\Digite uma LETRA: ";
    cin >> letra[0];
    for (i=0; i<tam; i++){
        if (palavra[i]==letra[0]){
            acerto=true;
            secreta[i]=palavra[i];
            acertos++;
        }
    }
    if (!acerto){
        chances--;
    }
    acerto=false;
    system("cls");
}
if (acertos==tam){
    cout << "Voce Venceu Abestado!!!";
    }
    else{
    cout << "Voce Perdeu, seu Besta!!!";
    }
system("pause");
return 0;
}