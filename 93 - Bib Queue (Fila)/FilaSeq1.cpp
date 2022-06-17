#include <iostream>
#include <queue>

using namespace std;

constexpr int MAXN = 100000; // capacidade máxima da fila

class FilaSeq1
{
private:
public:
    char elementos[MAXN]; // elementos na fila
    int N; // num. de elementos na fila
 
    void cria() // inicializa agregado
    {
        this->N = 0;
    }
    void libera() {} // nenhum recurso dinâmico para desalocar // finaliza agregado

    char frente()
    {
        return this->elementos[0]; // primeiro sempre 'frente'
    }
    void enfileira(char dado)
    {
        this->elementos[N] = dado;
        this->N++;
    }
    char desenfileira()
    {
        char r = this->elementos[0]; // primeiro sempre 'frente'
        for (int i=0; i<N-1; i++) // laço realmente necessário?
        this->elementos[i] = this->elementos[i+1];
        this->N--;
        return r;
    }
};

int main()
{

    FilaSeq1 *p = new FilaSeq1();

    p->cria();
    p->enfileira('A');
    p->enfileira('B');
    p->enfileira('C');

    std::cout << p->frente();
    //std::cout << p->desenfileira();

    p->enfileira('D');

    while (p->N > 0)
    {
        cout << p->desenfileira();
    }

    p->libera();

    return 0;
}