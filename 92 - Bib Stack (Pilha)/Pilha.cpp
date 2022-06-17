#include <iostream>
#include <stack>

int main()
{

    std::stack<int> Pilha1;  //{10,11,13,15,19,21};
    std::stack<char> Pilha2; //={'E','D','U','A','R','D','O'};
    int i; //tam1, tam2;

    Pilha1.push(10), Pilha1.push(11), Pilha1.push(13), Pilha1.push(15), Pilha1.push(19), Pilha1.push(21), Pilha1.push(25);
    Pilha2.push('O'), Pilha2.push('D'), Pilha2.push('R'), Pilha2.push('A'), Pilha2.push('U'), Pilha2.push('D'), Pilha2.push('E');

    std::cout << "\nTamanho da Pilha 01: " << Pilha1.size() << " | Tamanho da Pilha 02: " << Pilha2.size() << "\n";

    //Pilha1.swap(Pilha2);

    //tam1 >> Pilha1.size();
    //tam2 >> Pilha2.size();

    while (!Pilha1.empty())
    {
        std::cout << "\nValores da Pilha 01: " << Pilha1.top();
        Pilha1.pop();
    }

    std::cout << "\n\nTamanho da Pilha 01: " << Pilha1.size() <<"\n\n";
    
    while (!Pilha2.empty())
    {
        std::cout << "\nValores da Pilha 02: " << Pilha2.top();
        Pilha2.pop();
    }

    std::cout << "\n\nTamanho da Pilha 02: " << Pilha2.size() <<"\n\n";
    
    return 0;
}