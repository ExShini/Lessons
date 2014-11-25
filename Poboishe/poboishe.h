#ifndef POBOISHE_H
#define POBOISHE_H
#include "list"
#include "vector"
#include "solder.h"
using namespace std;

class Poboishe
{
public:
    Poboishe();
    void pushSolder(unsigned int IdKing, Solder* pSolder);
    void yourTurn();
private:
    vector<list<Solder*>*> m_aArmyCollection;

};

#endif // POBOISHE_H
