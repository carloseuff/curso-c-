#include <iostream>

using namespace std;

int main(){

int matriz [3][5];
int l,c;

for (l=0;l<3;l++){
    for (c=0;c<5;c++){
    matriz[l][c]=l;
    }
}
for (l=0;l<3;l++){
    for (c=0;c<5;c++){
    cout <<matriz[l][c]<< " "; 
    }
cout << "\n";
}
return 0;
}