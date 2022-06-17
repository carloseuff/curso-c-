#include <iostream>

using namespace std;

int main(){

int matriz [3][5];
int l,c;

matriz [0][0]=0;
matriz [0][1]=0;
matriz [0][2]=0;
matriz [0][3]=0;
matriz [0][4]=0;

matriz [1][0]=5;
matriz [1][1]=5;
matriz [1][2]=5;
matriz [1][3]=5;
matriz [1][4]=5;

matriz [2][0]=9;
matriz [2][1]=9;
matriz [2][2]=9;
matriz [2][3]=9;
matriz [2][4]=9;

for (l=0;l<3;l++){
    for (c=0;c<5;c++){
    cout <<matriz[l][c]<< " "; 
    }
cout << "\n";
}
return 0;
}