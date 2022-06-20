#include <iostream>

constexpr int MAXN = 50;

using namespace std;

class Heap1
{
public:
    int elementos[MAXN];
    int N;

    void cria()
    {
        this->N = 0;
    }

    int frente()
    {
        return this->elementos[0];
    }

    int pai(int pos)
    {
        return (pos - 1) / 2;
    }

    int filho1(int pos)
    {
        return (pos * 2) + 1;
    }

    int filho2(int pos)
    {
        return filho1(pos) + 1;
    }

    void insere(int pos)
    {
        elementos[N] = pos;
        N++;
        sobe(N - 1);
    }
    void swap(int elem1, int elem2)
    {
        int aux = elementos[elem1];
        elementos[elem1] = elementos[elem2];
        elementos[elem2] = aux;
    }
    void sobe(int pos)
    {
        int p = pai(pos);
        while (pos > 0)
        {
            if (elementos[pos] >= elementos[p])
            
            break;

            swap(elementos[pos], elementos[p]);
            pos = p;
            p = pai(pos);
        }
    }
    void desce(int pos)
    {
        int f = filho1(pos);
        while (f < N)
        {
            if ((f < N - 1) && (elementos[f + 1] < elementos[f]))
                f = f + 1;
            if (elementos[f] >= elementos[pos])
                break;
            swap(f, pos);
            pos = f;
            f = filho1(pos);
        }
    }
    int remove()
    {
        swap(0, N - 1);
        N--;
        desce(0);
        return elementos[N];
    };

    void constroi_sobe(int v[], int N)
    {
        for (int i = 1; i < N; i++)
            this->elementos[i] = v[i];
        this->N = N;
        for (int i = 1; i < N; i++)
            sobe(i);
    }

    void constroi_desce(int v[], int N)
    {
        for (int i = 1; i < N; i++)
            this->elementos[i] = v[i];
        this->N = N;
        for (int i = N / 2 - 1; i >= 0; i--)
            desce(i);
    }
};
int main()
{

    Heap1 *h = new Heap1();

    h->cria();
    h->insere(20);
    h->insere(10);
    h->insere(30);
    //cout << h->frente() << endl;
    h->constroi_sobe(21);
    //h->insere(5);
    //h->insere(11);

    // cout << "\nValor de FIM------:" << p->fim + p->N << endl;
    // cout << "\nValor de N........:" << p->N << endl;
    //  cout << "\nValor de INICIO...:" << p->inicio << endl;

    // cout << "================================================" << endl;

    while (h->N > 0)
    {
        cout << "\nHeap1..:" << h->remove() << endl;
        // cout << "Fim da Fila..:" << p->ver_fim() << endl;
        // cout << "\nValor de FIM------:" << p->N << endl;
        //  p->remove_inicio();
        //h->remove();
    }

    return 0;
}