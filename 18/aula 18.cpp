#include <iostream>

using namespace std;

int main(){

//int vetor[5], 
int i;
int vetor[5]={88,55,33,66,22};
//cin >> vetor[0];
//cin >> vetor[1];
//cin >> vetor[2];
//cin >> vetor[3];
//cin >> vetor[4];

//for (i=0; i<5; i++)
for (i=0; i<sizeof(vetor)/4; i++)
{
    cout << "\n\n" <<vetor[i]<< "\n\n";
}

// cout << "\n\n" << *** VARIÁVEL A SER IMPRESSA ***  << "\n\n";

return 0;
}
