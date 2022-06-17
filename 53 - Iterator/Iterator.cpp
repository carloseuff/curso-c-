#include <iostream>
#include <deque>

int main()
{

    std::deque<char> fila1= {'E', 'D', 'U', 'A', 'R', 'D', 'O'}; //{10,11,13,15,19,21};
    //std::vector<char> fila2;                                       //={'E','D','U','A','R','D','O'};
    // auto::iterator itr;

    /*fila1.push('S');
    fila1.push('A');
    fila1.push('N');
    fila1.push('T');
    fila1.push('A');
    fila1.push('N');
    fila1.push('A');*/

    /*fila2.emplace('=');
    fila2.push('E');
    fila2.push('D');
    fila2.push('U');
    fila2.push('A');
    fila2.push('R');
    fila2.push('D');
    fila2.push('O');
    fila2.emplace('*');*/

    for (auto itr = fila1.begin(); itr != fila1.end(); itr++)
    {
        std::cout << *itr;
    }

    //<< " | Tamanho da Fila 02: " << fila2.size() << "\n";

    return 0;
}
