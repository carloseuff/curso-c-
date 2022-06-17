#include <iostream>
#include <queue>

using namespace std;

constexpr int MAXN = 100000; // capacidade máxima da fila

class FilaSeq2
{
private:
public:
    char elementos[MAXN];
    int N;
    int inicio;
    int fim;

    void cria()
    {
        this->N = 0;
        this->inicio = 0;
        this->fim = 0;
    }
    void libera(){} // nenhum recurso dinâmico para desalocar

    char frente()
    {
        return this->elementos[inicio];
    }
    void enfileira(char dado)
    {
        this->elementos[fim] = dado;
        this->fim++;
        this->N++;
    }
    char desenfileira()
    {
        char r = this->elementos[inicio];
        this->inicio++;
        this->N--;
        return r;
    }
};

int main()
{

    FilaSeq2 *p = new FilaSeq2();

    p->cria();
    p->enfileira('A');
    p->enfileira('B');
    p->enfileira('C');

    std::cout << p->frente();
    std::cout << p->desenfileira();

    p->enfileira('D');

    while (p->N > 0)
    {
        cout << p->desenfileira();
    }

    // p->libera();

    return 0;
}