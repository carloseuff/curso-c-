#include <iostream>
#include <queue>

int main()
{

    std::queue<char> fila1;  //{10,11,13,15,19,21};
    std::queue<char> fila2; //={'E','D','U','A','R','D','O'};
    
    fila1.push('S');
    fila1.push('A');
    fila1.push('N');
    fila1.push('T');
    fila1.push('A');
    fila1.push('N');
    fila1.push('A');

    fila2.emplace('=');
    fila2.push('E');
    fila2.push('D');
    fila2.push('U');
    fila2.push('A');
    fila2.push('R');
    fila2.push('D');
    fila2.push('O');
    fila2.emplace('****');
    

    std::cout << "\nTamanho da Fila 01: " << fila1.size() << " | Tamanho da Fila 02: " << fila2.size() << "\n";

    fila1.swap(fila2);

    while (!fila1.empty())
    {
        std::cout << "\nValores da Fila 01: " << fila1.front();
        fila1.pop();
    }

    std::cout << "\n\nTamanho da Fila 01: " << fila1.size() << "\n\n";

    while (!fila2.empty())
    {
        std::cout << "\nValores da Fila 02: " << fila2.front();
        fila2.pop();
    }

    std::cout << "\n\nTamanho da Fila 02: " << fila2.size() << "\n\n";

    std::cout << "\nTamanho da Fila 01: " << fila1.size() << " | Tamanho da Fila 02: " << fila2.size() << "\n";
    
    return 0;
}