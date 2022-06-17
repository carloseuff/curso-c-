template <typename Agregado, typename Tipo>

concept bool

PilhaTAD = requires(Agregado a, Tipo t)

{
    // requer operação 'topo'
    {a.topo()};
    // requer operação 'empilha' sobre tipo 't'
    {a.empilha(t)};
    // requer operação 'desempilha'
    {a.desempilha()};
};
constexpr int MAXN = 100'000; // capacidade máxima da pilha


class PilhaSeq1
{
public:
    char elementos[MAXN]; // elementos na pilha
    int N;                // num. de elementos na pilha
    void cria() { ... }   // inicializa agregado
    void libera() { ... } // finaliza agregado
    char topo() { ... }
    void empilha(char dado){...};
    char desempilha(){...};
};
// verifica se agregado PilhaSeq1 satisfaz conceito PilhaTAD
static_assert(PilhaTAD<PilhaSeq1, char>);

int main()
{
    PilhaSeq1 p;
    p.cria();
    p.empilha('A');
    p.empilha('B');
    p.empilha('C');
    printf("%c\n", p.topo());
    printf("%c\n", p.desempilha());
    p.empilha('D');
    while (p.N > 0)
        printf("%c\n", p.desempilha());
    p.libera();
    return 0;
}
class PilhaSeq1
{

    void cria()
    {
        this->N = 0;
    }
    void libera()
    // nenhum recurso dinâmico para desalocar
    {
    
    }
}
class PilhaSeq1
{
    void empilha(char dado)
    {
        this->elementos[N] = dado;
        this->N++;
    }
    char desempilha()
    {
        this->N--;
        return elementos[N];
    }

} 
class PilhaSeq1
{
    char topo()
    {
        return this->elementos[N - 1];
    }
}