#include <iostream>

constexpr int MAXN = 3;

using namespace std;

class Heap1
{
public:
    char elementos[MAXN];
    int N;

    void cria()
    {this->N = 0;}

    int frente()
    {return this->elementos[0];}

    int pai(int pos)
    {return (pos - 1) / 2;}

    int filho1(int pos)
    {return (pos * 2) + 1;}

    int filho2(int pos)
    {return filho1(pos) + 1;}
}