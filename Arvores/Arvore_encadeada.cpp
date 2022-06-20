#include <iostream>

constexpr int MAXN = 3;

using namespace std;

class NoEnc1
{
public:
    char chave;
    NoEnc1* nosFilhos[MAXN];
};

class ArvoreEnc1
{
public:
    NoEnc1* raiz;
};
class NoEnc1
{
public:
    char chave;
    NoEnc1* nosFilhos[MAXN];
};